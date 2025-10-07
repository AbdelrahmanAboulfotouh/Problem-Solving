/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/
typedef unordered_map<int,vector<int>> Graph;
class Solution {
public:
    void build_graph(vector<Employee*> employees,Graph &graph, unordered_map <int,int> & value )
    {
        for(auto Emp : employees)
        {
            graph[Emp->id] = Emp->subordinates;
            value[Emp->id] = Emp->importance;

        }
    }
    void dfs(Graph & graph,int node_id, int & ans,unordered_map <int,int> & value )
    {
        ans += value[node_id];
        for(auto neighbour : graph[node_id])
            dfs(graph,neighbour,ans,value);
    }
    int getImportance(vector<Employee*> employees, int id)
    {
        Graph graph;
        unordered_map <int,int>  value;
        build_graph(employees, graph, value);
        int ans {0};
        dfs(graph, id, ans, value);

        return ans;
    }
};