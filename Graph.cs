using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;



    class Graph
    {
        private int _V;    
        private bool _directed;
        LinkedList<int>[] _adj;  
      
        public Graph(int V, bool directed)
        {
            _adj = new LinkedList<int>[V];

            for (int i = 0; i < _adj.Length; i++)
            {
                _adj[i] = new LinkedList<int>();
            }

            _V = V;
            _directed = directed;       
        }

        public void AddEdge(int v, int w)
        {            
            _adj[v].AddLast(w);

            if (!_directed)
            {
                _adj[w].AddLast(v);
            }
        }

        public List<int> BreadthFirstSearch(int s)
        {
            bool[] visited = new bool[_V];
            List<int> list2 = new List<int>(); 

            for(int i = 0; i < _V; i++)
                visited[i] = false;
   
            // Create a queue for BFS
            LinkedList<int> queue = new LinkedList<int>();
   
            visited[s] = true;
            queue.AddLast(s);
            list2.Add(s);
                    
   
            while(queue.Any())
            {
                // Dequeue a vertex from queue and print it
                s = queue.First();
                //Console.Write( s + " " );
                list2.Add(s);
               
                queue.RemoveFirst();

                LinkedList<int> list = _adj[s];

                foreach (var val in list)                
                {
                    if (!visited[val])
                    {
                        visited[val] = true;
                        queue.AddLast(val);
                    }
                }
            }
            return list2;
        }

    }

    
