class Solution {
public:
typedef unordered_map<int, vector<int>> Graph;
void add_edge(Graph & graph, int from, int to)
{
    graph[from].push_back(to);
    graph[to].push_back(from);
}
Graph  build_graph(vector<vector<int>>& edges)
{
    Graph  graph;
    for(int i{0};i<edges.size();++i)
    {
        add_edge(graph,edges[i][0],edges[i][1]);
    }
return graph;

}
void DFS(Graph &graph,unordered_map<int,bool>&visited,int &nodesNumber,int node)
{
    visited[node] = true;
    nodesNumber++;
    for(auto neighbour:graph[node])
    {
        if(visited.find(neighbour) == visited.end())
        {
            DFS(graph,visited,nodesNumber,neighbour);
        }
    }
}

bool validTree(int n, vector<vector<int>>& edges) 
{
    if(edges.empty())
        return true;
        
    int nodesNumber{0};
    unordered_map<int,bool>visited;
    Graph graph = build_graph(edges);

    DFS(graph,visited,nodesNumber,edges[0][0]);
   



    return (edges.size() == n-1 && n ==nodesNumber)  ;
}
};
