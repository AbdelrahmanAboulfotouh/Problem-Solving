class Solution {
public:
bool is_valid(int r, int c, vector<vector<char>>&grid)
{
    if(r< 0 or r>= grid.size())
        return false;
    if(c < 0 or c >= grid[0].size())
        return false;
    return true;
}
bool DFS_on_grid(int nx, int ny,int px, int py,  vector<vector<char>>& grid, vector<vector<bool>>& visited, char target)
{
   
    if(!is_valid(nx,ny,grid) or visited[nx][ny] or grid[nx][ny] != target)
        return false;

    visited[nx][ny] = true;
    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};
    
    for(int dir{0};dir<4;++dir)
    {
        int x = nx + dx[dir];
        int y = ny + dy[dir];
        
        if(is_valid(x,y,grid) and visited[x][y] and (x !=px or y !=py) and grid[x][y] == target)
            return true;
            
        if(DFS_on_grid(x, y,nx,ny, grid, visited,target ) ) 
            return true;
    }
    return false;
}
    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size()));
        
        for(int i{0};i<grid.size();++i)
        {
            for(int j{0};j<grid[0].size();++j)
            {
                bool cycle_flag = DFS_on_grid(i, j, i, j, grid, visited,grid[i][j] );
                if(cycle_flag)
                    return true;
            }
        }
        return false;

    }
};