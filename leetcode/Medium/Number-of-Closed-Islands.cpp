class Solution {
public:
bool is_valid(int r, int c, vector<vector<int>>& grid)
{
    if(r < 0 or r>=grid.size())
        return false;
    if(c < 0 or c>= grid[0].size())
        return false;
    return true;
}
void DFS_on_grid(int x, int y, vector<vector<int>>& grid,vector<vector<bool>>& visited,  bool &is_island)
{
    if(!is_valid(x,y,grid) or grid[x][y] == 1 or visited[x][y] )
        return;

    visited[x][y] = true;

    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};
    for(int dir{0};dir<4;++dir)
    {
        if(!is_valid(x+dx[dir],y+dy[dir],grid))
            is_island = false;
        DFS_on_grid(x+dx[dir],y+dy[dir],grid,visited,is_island);
    }


}
    int closedIsland(vector<vector<int>>& grid) {
        int closed_island_counter{0};
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
        for(int i{0};i<grid.size();++i)
        {
            for(int j{0};j<grid[0].size();++j)
            {
                bool is_closed_island = true;
                bool inside = false;
                if(grid[i][j] == 0 and visited[i][j] == false)
                        inside = true;
                DFS_on_grid(i,j,grid,visited,is_closed_island);
                if(is_closed_island and inside)
                    ++closed_island_counter;
            }
        }
        return closed_island_counter;
    }
};