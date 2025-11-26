class Solution {
public:
typedef vector<vector<int>>Graph;
void add_undirected_node(Graph &graph,int from, int to)
{
    graph[from].push_back(to);
    graph[to].push_back(from);
}
Graph bulid_graph(vector<vector<int>>& pairs, int sz)
{
    Graph graph(sz);
    for(int i{0};i<pairs.size();++i)
        add_undirected_node(graph,pairs[i][0],pairs[i][1]);
    return graph;
}
void  dfs(Graph &graph, vector<bool>&visited,vector<int>&connected_indicies,int node)
{
    visited[node] =true;
    connected_indicies.push_back(node);
    for(auto neighbour : graph[node])
    {
        if(!visited[neighbour])
        dfs(graph,visited, connected_indicies,neighbour);
    }
}
string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) 
{
    Graph graph = bulid_graph(pairs,s.size());
    vector<bool>visited(s.size());
    for(int i{0};i<s.size();++i)
    {
        if(!visited[i])
        {
            vector<int>connected_indicies;
            dfs(graph,visited,connected_indicies,i);
            string connected_strs;
            for(auto &idx:connected_indicies)
                connected_strs+=s[idx];
            sort(connected_strs.begin(),connected_strs.end());
            sort(connected_indicies.begin(),connected_indicies.end());
            for(int j{0}; j<connected_strs.size();++j)
                s[connected_indicies[j]] = connected_strs[j];

        }
    }
    return s;
}
};
