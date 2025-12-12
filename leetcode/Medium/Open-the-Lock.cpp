1class Solution {
2public:
3vector<string> getNiehbours(string curVal)
4{
5
6    vector<string> nextVals;
7    nextVals.reserve(8);
8
9    for (int i = 0; i < 4; i++) {
10        string s = curVal;
11        if (s[i] == '9')
12            s[i] = '0';
13        else
14            s[i] = s[i] + 1;
15        nextVals.push_back(s);
16    }
17
18   for (int i = 0; i < 4; i++) {
19        string s = curVal;
20        if (s[i] == '0')
21            s[i] = '9';
22        else
23            s[i] = s[i]  - 1;
24        nextVals.push_back(s);
25    }
26
27    return nextVals;
28
29}
30int  bfs (vector<string>&deadends,string target)
31{
32unordered_map<string, bool> visited;
33    for(string dead : deadends)
34        visited[dead] = true;
35
36    queue<string>q;
37    q.push("0000");
38    for(int level {0},sz = 1 ; !q.empty();++level,sz = q.size())
39    {
40        while(sz--)
41        {
42            string curVal = q.front();
43            q.pop();
44           if(visited.find(curVal) != visited.end() && visited[curVal] == true)
45            continue;
46
47            visited[curVal] = true;
48            if(curVal == target)
49                return level;
50            vector<string> nextVals = getNiehbours(curVal);
51
52            for(string next  : nextVals )
53            {
54                if(visited.find(next) == visited.end())
55                    {
56                        
57                        q.push(next);
58                    }
59            }
60
61        }
62    }
63    return -1;
64}
65    int openLock(vector<string>& deadends, string target) {
66        return bfs(deadends,target);
67    }
68};