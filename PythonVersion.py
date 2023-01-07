

def main():
    #List<string[]> lines = new List<string[]>()
   """  List<DUNode> defineuselist = new List<DUNode>()
    List<CFNode> cfnodelist = new List<CFNode>()
    List<Node> nodes = new List<Node>()
    string line """
            
try:
        f = open("/Users/anniewatson/Downloads/VulCNN-main/pdgs/Vul/CVE_raw_000062679_CWE121_Stack_Based_Buffer_Overflow__CWE129_large_22_bad.dot", "r")
        su = f.readlines()
                
        line = f.readine()
        line = f.readine()
        lines = []
              
            
        for line in su: #while there are still lines read each one
            lines.Add(getInformation(line)); #this makes a list of string arrays, each one has all of the parameters in it
            
            if(line.Contains("}") or line == None):
                break
                    
        f.close()            
                    

                 
except:
        print("thre was an exception")
        #if there wasn't a file then it's prompted to enter a different one
    
            
            

createNodes(lines,defineuselist,nodes,cfnodelist);

Graph g = new Graph(nodes.Count+1, true);
    
foreach (DUNode nd in defineuselist)
{
            g.AddEdge(nd.define.Line, nd.use.Line);
        }

foreach (CFNode nd in cfnodelist)
{
            g.AddEdge(nd.initial.Line, nd.initial.Line);
}
        
StreamWriter sw2 = new StreamWriter("sliced.txt");
       
            float[] forwardslicematrix = new float[nodes.Count]; 

            for(int a = 0; a<nodes.Count;a++){
                sw2.WriteLine("LINE: {0} :",a);
                List<int> slice =  createGraph(defineuselist, nodes, cfnodelist, g, a);
                forwardslicematrix[a] = ((float)slice.Count)/((float)nodes.Count);
                foreach(Node node in nodes){
                if (slice.Contains(node.Line)){
            sw2.WriteLine(node.Line);
           }
           
       }
    }

        sw2.Close();

        //forward slicing matrix is what we're looking for here. 
        
        StreamWriter streamwriter = new StreamWriter("ForwardSliceWeights.txt");
        for(int a = 0; a<nodes.Count; a++){
            streamwriter.WriteLine(forwardslicematrix[a]);
        }
        
        streamwriter.Close();


        }

        static List<int> createGraph( List<DUNode> defineuselist,List<Node> nodes,  List<CFNode> cfnodelist, Graph g, int slice){
            
            
            Console.Write("Breadth First Traversal from vertex 2:\n");
            //slice is the number of the line i think 
            List<int> newlist =  g.BreadthFirstSearch(slice); //graph reachability 

        //    foreach (int nd in newlist)
        //     {
        //     Console.WriteLine(nd);
        //     }
            return newlist;
        }


        static string[] getInformation(string line){
            //char[] delim = { ' ','\t' }; //nice cause I can decide what splits up the lin
             
            string [] subs = line.Split(new char[0], StringSplitOptions.RemoveEmptyEntries);
            return subs;
        }


        static void createNodes(List<string[]> lines, List<DUNode> defineuselist,List<Node> nodes,  List<CFNode> cfnodelist ){

            int counter =0;
            foreach (string[] l in lines){
                
                if(l[1] != ("->")){
                    Console.WriteLine("HI" );
                    Node node = new Node(); 
                    nodes.Add(node);
                    node.Name = l[0];
                    node.Line = counter;
                    counter++;
                }
                else if (l[6].Contains("DDG")){

                    Console.WriteLine(l[6]);
                    Node def = nodes.Find(x => x.Name.Contains(l[0]));
                    Node use = nodes.Find(x => x.Name.Contains(l[2]));
                    Console.WriteLine(def);
                    Console.WriteLine(use);
                    DUNode dunode = new DUNode(def,use); //create a new define use node since something got defined
                    defineuselist.Add(dunode);
                }
                else if (l[6].Contains("CFD")){

                    Console.WriteLine(l[6]);
                    Node init = nodes.Find(x => x.Name.Contains(l[0]));
                    Node dom = nodes.Find(x => x.Name.Contains(l[2]));
                    Console.WriteLine(init);
                    Console.WriteLine(dom);
                    CFNode cfnode = new CFNode(init,dom);
                    cfnodelist.Add(cfnode);
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

if __name__ == '__main__':
    main()