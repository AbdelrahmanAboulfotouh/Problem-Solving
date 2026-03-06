1class Solution {
2public:
3bool isvalid(int x,int y,int m,int n)
4{
5 return (x >= 0 and x < m and y>=0 and y<n);
6}
7                                    // G for 6 W for 8  red for -1 valid for 0
8    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
9        const int GUARD = 6;
10        const int WALL = 8;
11        const int SEEN = -1;
12        vector<vector<int>>Grid(m,vector<int>(n));
13        for(vector<int> &v : walls)
14        {
15                     Grid[v[0]][v[1]] = WALL;
16        }
17         for (auto& g : guards) Grid[g[0]][g[1]] = GUARD;
18
19         for(vector<int> &v : guards)
20        {
21            int i = v[0];
22            int j = v[1];
23            Grid[i][j] = GUARD;
24
25            int dx[] = {1,-1,0,0};
26            int dy[] = {0,0,-1,1};
27            for(int di = 0 ; di<4 ; ++di)
28            {
29                int x = i ;
30                int y = j;
31                int nx = dx[di] + x;
32                int ny = dy[di] + y;
33                while(isvalid(nx,ny,m,n)  and Grid[nx][ny] != WALL and Grid[nx][ny] != GUARD)
34                {
35                    
36                    if(Grid[nx][ny] == 0)
37                            Grid[nx][ny] = SEEN;
38                    x = nx;
39                    y = ny;
40                     nx = dx[di] + x;
41                     ny = dy[di] + y;
42
43                }
44            }
45        }
46        int ans{0};
47        for(vector<int> row : Grid)
48        {
49            for(int cel : row)
50            {
51                if(cel == 0)
52                    ++ans;
53            }
54        }
55        return ans;
56        
57    }
58};