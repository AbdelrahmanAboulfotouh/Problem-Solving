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
13
14
15bool Dfs(Graph & graph,vector<int> &state,vector<int> &ans,int curNode)
16{
17    if(state[curNode] == 1)
18        return false;//cycle detected
19         if(state[curNode] == 2)
20        return true;//already
21    state[curNode] = 1;
22    for(auto nieghbour : graph[curNode])
23        if(!Dfs(graph,state,ans,nieghbour))
24          return false;
25
26    state[curNode] = 2;
27    ans.push_back(curNode); 
28    return true;
29}
30
31    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
32        Graph graph(numCourses);buidl_graph(graph,prerequisites);
33        vector<int>ans;
34        vector<int>state(numCourses,0);
35                
36        for(int i{0}; i<numCourses;++i)
37        {
38            if(!state[i])
39                {
40                    if(!Dfs(graph,state,ans,i))
41                        return {};
42                }
43        }
44          
45        
46               
47
48
49       
50
51       
52             reverse(ans.begin(), ans.end());
53
54            return ans;
55    }
56};