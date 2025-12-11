1class Solution {
2public:
3   
4
5
6int  bfs(vector<int>& nums,  int start, int goal)
7{
8   vector<bool> visited(1001,false);
9    queue<int> q;
10    q.push(start);
11    visited[start] = true;
12    int numberOfOperations = 0;
13    for(int level = 0 , sz = 1 ; !q.empty();++level , sz =q.size())
14    {
15        while(sz--)
16        {
17            int curVal = q.front();
18            q.pop();
19           
20            if(curVal== goal)
21                return level;
22                for(int i{0};i<nums.size();++i)
23                    {
24                        int nextVal = curVal + nums[i];
25                        if (nextVal == goal)
26                                return level + 1;
27                        if(nextVal >=0 && nextVal <= 1000 && !visited[nextVal])
28                          {  q.push(nextVal);
29                            visited[nextVal] = true;}
30                        nextVal = curVal - nums[i];
31                         if (nextVal == goal)
32                                return level + 1;
33                        if(nextVal >=0 && nextVal <= 1000 && !visited[nextVal])
34                          {  q.push(nextVal);
35                            visited[nextVal] = true;}
36                        nextVal = curVal ^ nums[i];
37                         if (nextVal == goal)
38                                return level + 1;
39                         if(nextVal >=0 && nextVal <= 1000 && !visited[nextVal])
40                          {  q.push(nextVal);
41                            visited[nextVal] = true;}
42                    }
43            
44        }
45    }
46    return -1;
47}
48
49 int minimumOperations(vector<int>& nums, int start, int goal) 
50 {
51    
52        
53        return bfs (nums , start,goal);
54}
55
56
57
58};