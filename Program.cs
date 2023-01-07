using System;
using System.IO;
using System.Collections.Generic; 
using System.Collections;
using System.Linq;

using System.Linq;
//using System.Runtime.InteropServices;
//using System.Text;
//using System.Threading.Tasks;


namespace VulCNN_main
{
    class Program
    {
        static void Main(string[] args)
        {
           // /Users/anniewatson/Downloads/VulCNN-main/dataset/Dataset-sard/Vul/CVE_raw_000062582_CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_21_bad.c
          //go("/Users/anniewatson/Downloads/VulCNN-main/pdgs/Vul/CVE_raw_000062582_CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_21_bad.dot");
            string[] filePaths = Directory.GetFiles(@"/Users/anniewatson/Downloads/VulCNN-main/testers/pdgs/Vul/");
            
           // /Users/anniewatson/Downloads/VulCNN-main/dataset/Dataset-sard/No-Vul/raw_000062911_goodG2B.c
             //string filepaths = "/Users/anniewatson/Downloads/VulCNN-main/pdgs/No-Vul/raw_000062911_goodG2B.dot";
            foreach (string f in filePaths){
            go(f);
            }
            
            //gol("/Users/anniewatson/Downloads/VulCNN-main/pdgs/No-Vul/");
        }
       

        static void go(string path)
        {
            Console.WriteLine(path);
             List<string[]> lines = new List<string[]>();
             List<DUNode> defineuselist = new List<DUNode>();
             List<CFNode> cfnodelist = new List<CFNode>(); 
             List<Node> nodes = new List<Node>();
             string line;
            try{
                
                StreamReader sr2 = new StreamReader(path); //open up file reader
                line = sr2.ReadLine(); //read line
                line = sr2.ReadLine();

              
            
                    while(line !=null) //while there are still lines read each one
                    {
                    if(string.IsNullOrEmpty(line))
                    {
                        break;
                    }
                    //Console.WriteLine(line);
                    lines.Add(getInformation(line)); //this makes a list of string arrays, each one has all of the parameters in it
                    line = sr2.ReadLine();
                   
                    
                    }
               
                if(sr2 != null)
                {    
                sr2.Close(); // closes the file stream
                }
                 
                }
                catch(Exception e){
                   // Console.WriteLine(e) ;
                     // if there wasn't a file then it's prompted to enter a different one
    
                }
            
            //Console.WriteLine(lines.Count);
            createNodes(lines,defineuselist,nodes,cfnodelist,path);

            Graph g = new Graph(nodes.Count+1, true);
    
          // Console.WriteLine("DEFINE USEHAHA");
            foreach (DUNode nd in defineuselist){
            g.AddEdge(nd.define.Line, nd.use.Line);
          // Console.WriteLine(nd.define.Line.ToString() + "," +nd.use.Line.ToString());
        }
      // Console.WriteLine("CONTROL FLOWSDFSDF");
        foreach (CFNode nd in cfnodelist){
          //  Console.WriteLine(nd.initial.Line.ToString() +"," +nd.dominator.Line.ToString());
            g.AddEdge(nd.initial.Line, nd.dominator.Line);
        }
        
           StreamWriter sw2 = new StreamWriter("sliced.txt");
       
            float[] forwardslicematrix = new float[nodes.Count]; 

            for(int a = 0; a<nodes.Count;a++){
                sw2.WriteLine("LINE: {0} :",a);
                sw2.WriteLine("NODE: {0}", nodes[a].Name);
                
                List<int> slice =  createGraph(defineuselist, nodes, cfnodelist, g, a);
                //Console.WriteLine("FORWARD SLICE:");
               // Console.WriteLine((float)slice.Count);
                //Console.WriteLine("TOTAL");
                //Console.WriteLine((float)nodes.Count);
                forwardslicematrix[a] = (((float)slice.Count)-2)/((float)nodes.Count);
                foreach(Node node in nodes){
                if (slice.Contains(node.Line)){
            sw2.WriteLine(node.Line);
           }
           
       }
    }

        sw2.Close();

        //forward slicing matrix is what we're looking for here. 
        string substring = path.Substring(path.LastIndexOf('/') + 1);
        substring = substring.Substring(0, substring.Length-4);
        string outputpath = "/Users/anniewatson/Downloads/VulCNN-main/testers/dictionaries/Vul/";
        StreamWriter streamwriter = new StreamWriter(outputpath + substring + ".txt");
       
       foreach(float n in forwardslicematrix){
           // Console.WriteLine(n);
       }
        
        int b = 0;
        foreach(Node node in nodes){
            string name = node.Name.Substring(1,node.Name.Length-2);
            streamwriter.WriteLine(name+ " " +forwardslicematrix[b]);
            b=b+1;
        }
        
        streamwriter.Close();

            }
        




        static List<int> createGraph( List<DUNode> defineuselist,List<Node> nodes,  List<CFNode> cfnodelist, Graph g, int slice){
            
            
          //  Console.Write("Breadth First Traversal from vertex 2:\n");
            //slice is the number of the line i think 
            List<int> newlist =  g.BreadthFirstSearch(slice); //graph reachability 

        foreach (int nd in newlist)
            {

         // Console.WriteLine(nd);
          }
            return newlist;
        }


        static string[] getInformation(string line){
            //char[] delim = { ' ','\t' }; //nice cause I can decide what splits up the lin
             
            string [] subs = line.Split(new char[0], StringSplitOptions.RemoveEmptyEntries);
            return subs;
        }


        static void createNodes(List<string[]> lines, List<DUNode> defineuselist,List<Node> nodes,  List<CFNode> cfnodelist, string path ){
           // Console.WriteLine(path);
            int counter =0;
            //Console.WriteLine(lines[0]);
           // Console.WriteLine(lines[1]);
            foreach (string[] l in lines){
               Console.WriteLine(l[0]);
               if(l[0] != "}" && l[1]!=null){ 
                if(l[1] != ("->")){
                //    Console.WriteLine(counter + "HI" );
                    Node node = new Node(); 
                    nodes.Add(node);
                    node.Name = l[0];
                    node.Line = counter;
                    counter++;
                }
                else if (l[6].Contains("DDG")){

                 //   Console.WriteLine(l[6]);
                    Node def = nodes.Find(x => x.Name.Contains(l[0]));
                    Node use = nodes.Find(x => x.Name.Contains(l[2]));
                  //  Console.WriteLine(def);
                   // Console.WriteLine(use);
                    DUNode dunode = new DUNode(def,use); //create a new define use node since something got defined
                    defineuselist.Add(dunode);
                }
                else if (l[6].Contains("CDG")){

                  //  Console.WriteLine(l[6]);
                    Node init = nodes.Find(x => x.Name.Contains(l[0]));
                    Node dom = nodes.Find(x => x.Name.Contains(l[2]));
                    //Console.WriteLine(init);
                   // Console.WriteLine(dom);
                    CFNode cfnode = new CFNode(init,dom);
                    cfnodelist.Add(cfnode);
            }
            else{
               // Console.WriteLine("Made it down into the last else");
                //Console.WriteLine(l[6]);
            }
        }
            }
    }
    
    public class Node{
        public string Name;

        public int Line;

    public override string ToString()
    {
        return  "   Name: " + Name;
    }
       public List<string> registers = new List<string>();
       public string address; //ask if it's ok to put this as public, i can't remember the rules
       public string instructions;
       public string label;

       public LinkedList<Node> childNodes = new LinkedList<Node>(); 

    } //class for each line 
    
    public class DUNode{
        public Node define;
        public string registerOfInterest;
        public Node use;

        public DUNode(Node define){
            this.define = define;
            this.registerOfInterest = define.registers[0];

        }
        public DUNode(Node define, Node use){
        this.define = define;
        this.use = use;
        }
    }

     public class PDNode{
        public Node initial;
        public string registerOfInterest;
        public Node dominator;

       
        public PDNode(Node initial, Node dominator){
        this.initial = initial;
        this.dominator = dominator;
        }

    }

    public class CFNode{
   
        public Node initial;
        public string registerOfInterest;
        public Node dominator;

       
        public CFNode(Node initial, Node dominator){
        this.initial = initial;
        this.dominator = dominator;
        }

    }

    public class Criterion{
    private string nodeName;
    private List<string> relevantVariables; 
     public Criterion(Node node){
        this.nodeName = node.Name;
        this.relevantVariables = node.registers;
    }

    
}


}
}
