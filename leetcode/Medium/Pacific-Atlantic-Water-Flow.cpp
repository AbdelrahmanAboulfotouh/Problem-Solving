1class Solution {
2public:
3bool isValid(int i, int j, int rows, int columns)
4{
5        return (i >=0 && i< rows && j>=0 && j< columns);
6}
7 vector<vector<bool>> pacific_BFS(vector<vector<int>>& heights)
8{
9    int r = heights.size();
10    int c = heights[0].size();
11    vector<vector<bool>> Pacific(r, vector<bool>(c, false));
12
13    queue<pair<int,int>>q;
14    for(int i{0};i<heights.size();++i)
15    {
16        for(int j {0};j<heights[i].size();++j)
17        {
18            if(i == 0 || j == 0)
19            {
20                Pacific[i][j] = true;
21                q.push({i,j});
22            }
23        }
24    }
25    for(int level  = 0 ,sz =q.size();!q.empty();++level,sz = q.size())
26    {
27        while(sz--)
28        {
29            auto cur = q.front();
30            q.pop();
31            int dx[] = {1,0,-1,0};
32            int dy[] = {0,-1,0,1};
33            for(int i{0};i<4;++i)
34            {
35                int X = dx[i] + cur.first;
36                int Y = dy[i] + cur.second;
37                if(isValid(X,Y,heights.size(),heights[0].size()) and !Pacific[X][Y] and heights[cur.first][cur.second] <=heights[X][Y] )
38                {
39                    Pacific[X][Y] = true;
40                    q.push({X,Y});
41                }
42            }
43        }
44    }
45    return Pacific;
46}
47
48
49 vector<vector<int>>Atlantic_BFS(vector<vector<int>>& heights, vector<vector<bool>> &Pacific)
50{
51    
52    int r = heights.size();
53    int c = heights[0].size();
54    vector<vector<bool>> Atlantic(r, vector<bool>(c, false));
55
56    vector<vector<int>> result;
57    queue<pair<int,int>>q;
58
59    for(int i{0};i<r;++i)
60    {
61        int c = heights[i].size();
62        for(int j {0};j<c;++j)
63        {
64            if(i == r-1 || j == c-1)
65            {
66                Atlantic[i][j] = true;
67                q.push({i,j});
68            }
69        }
70    }
71    for(int level  = 0 ,sz =q.size();!q.empty();++level,sz = q.size())
72    {
73        while(sz--)
74        {
75            auto cur = q.front();
76            q.pop();
77            if(Pacific[cur.first][cur.second] && Atlantic[cur.first][cur.second])
78            {
79                vector<int> sub(2);
80                sub[0] = cur.first;
81                sub[1] = cur.second;
82                result.push_back(sub);//i dont know if it is right or not 
83
84            }
85            int dx[] = {1,0,-1,0};
86            int dy[] = {0,-1,0,1};
87            for(int i{0};i<4;++i)
88            {
89                int X = dx[i] + cur.first;
90                int Y = dy[i] + cur.second;
91                if(isValid(X,Y,heights.size(),heights[0].size()) && !Atlantic[X][Y] && heights[cur.first][cur.second] <=heights[X][Y])
92                {
93                    Atlantic[X][Y] = true;
94                    q.push({X,Y});
95                }
96            }
97        }
98    }
99    return result;
100}
101    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
102    {
103        if (heights.empty() || heights[0].empty())
104            return {};
105
106        vector<vector<bool>> Pacific = pacific_BFS(heights);
107        return Atlantic_BFS(heights,Pacific);
108    }
109};