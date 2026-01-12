1class Solution {
2public:
3typedef vector<vector<pair<int,int>>> Graph;
4void  build_graph( Graph &graph, const vector<vector<int>>& edges,int edgeColor)
5{
6   
7    for(auto edge : edges)
8    {
9        int x = edge[0];
10        int y = edge[1];
11        graph[x].push_back({y,edgeColor});
12    }
13
14}
15    vector<int> bfs(Graph& graph, vector<vector<int>>&visited, int n)
16    {
17        queue<pair<int,int>>q;
18        vector<int>ans(n,-1);ans[0] = 0;
19        q.push({0,0});
20        q.push({0,1});
21        visited[0][0] = visited[0][1] = true;
22
23        for(int level = 0 , sz =q.size() ; !q.empty();++level,sz = q.size())
24        {
25            while(sz--)
26            {
27                pair<int,int> cur = q.front();
28                int curVal = cur.first;
29                int curColor = cur.second;
30                q.pop();
31               
32                    
33                for(pair<int,int> neighbour : graph[curVal])
34                {
35                    int neighbourVal = neighbour.first;
36                    int neighbourColor = neighbour.second;
37                    if( (neighbourColor !=curColor ) && (!visited[neighbourVal][neighbourColor]) )
38                    {
39                        if(ans[neighbourVal] == -1)
40                        ans[neighbourVal] = level +1 ;
41                        visited[neighbourVal][neighbourColor] = true;
42                        q.push(neighbour);
43                     
44                    }
45                }
46
47            }
48          
49
50        }
51        return ans;
52    }
53    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) 
54    {
55        Graph graph(n);
56         build_graph(graph,redEdges,0); build_graph(graph,blueEdges,1);
57
58        vector<vector<int>>visited(n,vector<int>(2));
59
60        return bfs(graph,visited,n);
61
62    }
63};