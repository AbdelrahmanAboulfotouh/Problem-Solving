class Solution {
public:
typedef unordered_map<int,vector<int>>Graph;
    void add_unordered_edge(Graph & graph,int from, int to)
    {
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    void bulid_graph(Graph & graph,vector<int>& v )
    {
        unordered_set<int>st(v.begin(),v.end());
        for(int i{0};i<v.size();++i)
        {
            if(st.find(v[i]+1) != st.end())
            {
                add_unordered_edge(graph,v[i],v[i]+1);
            }
        }
    }
    void dfs(Graph & graph,unordered_map<int,bool>&visited, int node,int& length)
    {
        visited[node] = true;
        ++length;
        for(auto neighbour : graph[node])
        {
            if(visited.find(neighbour) == visited.end())
                dfs(graph, visited,neighbour,length);
        }
    }
   int longestConsecutive(vector<int>& v) 
   {
        Graph graph;
        bulid_graph(graph,v);
        unordered_map<int,bool>visited;
        int ans = 0;
        for( auto & x : v)
        {
            int len{0};
            if(visited.find(x) == visited.end())
                dfs(graph,visited,x,len);
            ans = max(ans,len);
        }

       return ans;
    }

};
