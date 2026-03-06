1class Solution {
2    boolean isvalid(int x,int y,int m,int n)
3{
4 return (x >= 0 && x < m && y>=0 && y<n);
5}
6    public int countUnguarded(int m, int n, int[][] guards, int[][] walls) {
7         int GUARD = 6;
8         int WALL = 8 ;
9         int SEEN = -1;
10        int[][] Grid  = new int[m][n];
11        for(int[] g : guards)
12        {
13            Grid[g[0]][g[1]] =GUARD;
14        }        
15          for(int[] g : walls)
16        {
17            Grid[g[0]][g[1]] = WALL;
18        }     
19        
20           
21
22         for(int[] v : guards)
23        {
24            int i = v[0];
25            int j = v[1];
26            Grid[i][j] = GUARD;
27
28            int dx[] = {1,-1,0,0};
29            int dy[] = {0,0,-1,1};
30            for(int di = 0 ; di<4 ; ++di)
31            {
32                int x = i ;
33                int y = j;
34                int nx = dx[di] + x;
35                int ny = dy[di] + y;
36                while(isvalid(nx,ny,m,n)  && Grid[nx][ny] != WALL && Grid[nx][ny] != GUARD)
37                {
38                    
39                    if(Grid[nx][ny] == 0)
40                            Grid[nx][ny] = SEEN;
41                    x = nx;
42                    y = ny;
43                     nx = dx[di] + x;
44                     ny = dy[di] + y;
45
46                }
47            }
48        }
49        int ans = 0;
50        for(int[] row : Grid)
51        {
52            for(int cel : row)
53            {
54                if(cel == 0)
55                    ++ans;
56            }
57        }
58        return ans;
59        
60    }
61}