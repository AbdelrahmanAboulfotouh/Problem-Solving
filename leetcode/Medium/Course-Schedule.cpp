1class Solution {
2public:
3typedef vector<vector<int>> Graph;
4void buidl_graph(Graph & graph,const vector<vector<int>>& prerequisites)
5{
6    for(auto edge : prerequisites)
7    {
8        int to = edge[0];
9        int from = edge[1];
10        graph[from].push_back(to);
11    }
12}
13    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
14        int sz = numCourses;
15        Graph graph(numCourses);
16        buidl_graph(graph,prerequisites);
17        vector<int>indegree(sz,0);
18        for(auto from : graph )
19        {
20            for(auto to : from)
21                indegree[to]++;
22        }
23        queue<int>q;
24        vector<int>list;
25        for(int i{0};i<indegree.size();++i)
26        {
27            if(!indegree[i])
28                q.push(i);
29        }
30        while(!q.empty())
31        {
32            int cur = q.front();
33            list.push_back(cur);
34            q.pop();
35            for(auto neighbour: graph[cur])
36            {
37                if(!--indegree[neighbour])
38                {
39                    q.push(neighbour);
40                }
41            }
42
43        }
44
45    return (list.size() == sz);
46    }
47};