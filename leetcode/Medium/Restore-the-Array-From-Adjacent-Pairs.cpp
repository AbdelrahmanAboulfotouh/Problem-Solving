#include <bits/stdc++.h>
using namespace std;
typedef unordered_map<int,vector<int>> Graph;
class Solution {
public:
    void add_undirected_edge(Graph &graph, int from, int to)
    {
                graph[from].push_back(to);
                graph[to].push_back(from);
    }
    void construct_graph(Graph &graph,vector<vector<int>> &adjacentPairs)
    {
        for(int i{0} ;i<adjacentPairs.size();++i)
        {
            auto pair = adjacentPairs[i];
            add_undirected_edge(graph, pair[0],pair[1]);
        }
    }

    void DFS(Graph & graph,unordered_map<int,bool>&visited,vector<int> &original, int sc)
    {
        visited[sc] = true;
        original.push_back(sc);
        for(auto neigboure : graph[sc])
        if(!visited[neigboure])
            DFS(graph,visited,original,neigboure);
    }
    vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
    {
        Graph graph;
        construct_graph(graph,adjacentPairs);
        unordered_map<int,bool>visited;
        vector<int> original;
        int start_dfs = 0 ;
        for(auto &sub : graph)
        {
            if(sub.second.size() == 1)
            {
                start_dfs = sub.first;
                break;
            }
        }
        DFS(graph,visited,original,start_dfs);
        return original;

    }
};
