class Solution {
public:
bool is_valid_index (vector<vector<char>>& grid,int x, int y)
{
   return  (x >=0 && x < grid.size() && y >=0 && y < grid[x].size());
}
void DFS (vector<vector<char>>& graph,vector<vector<bool>>& visited,int r,  int c)
{
    visited[r][c]=true;
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};

    for(int di{0};di<4;++di)
    {
        int x = dx[di] + r ;
        int y = dy[di] + c;
        if ( is_valid_index(graph,x,y) and !visited[x][y] and graph[r][c]!='0')
            DFS(graph,visited,x,y);
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int numberOFislands{0};
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size()));
        for(int i{0};i<grid.size();++i)
        {
            for(int j{0};j<grid[i].size();++j)
            {
                if(grid[i][j] == '0' || visited[i][j] == true)
                    continue;
                DFS(grid,visited,i,j);
                ++numberOFislands;
            }
        }
        return numberOFislands;
    }
};
