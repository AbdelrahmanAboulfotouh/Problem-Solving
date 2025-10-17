class Solution {
public:
bool is_vaild(int x, int y, vector<vector<int>>& grid)
{
    if(x < 0 or x>= grid.size())
        return false;
    if(y <0 or y>= grid[0].size())
        return false;

    return true;
}
bool valid_for_coloring(int x, int y, vector<vector<int>>& grid,int old_color, vector<vector<bool>>& visited)
{
    int dx[]={0,0,-1,1};
    int dy[]={-1,1,0,0};
    for(int dir{0};dir<4;++dir)
    {
        int i = x + dx[dir];
        int j = y + dy[dir];
        if(!is_vaild(i,j,grid) or (grid[i][j] != old_color and visited[i][j] == false) )
            return true;
    }
    return false;
}
    void DFS_on_grid(int i, int j, vector<vector<int>> &grid, vector<vector<bool>>& visited, int old_color,int new_color)
    {
        if(!is_vaild(i,j,grid) || grid[i][j] != old_color || visited[i][j] )
            return;
        visited[i][j] = true;
        if(valid_for_coloring(i , j,grid,old_color,visited))
            grid[i][j] = new_color;
        int dx[]={0,0,-1,1};
        int dy[]={-1,1,0,0};
        for(int dir{0};dir<4;++dir)
            DFS_on_grid(i + dx[dir], j + dy[dir], grid,visited,old_color, new_color);
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) 
    {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size()));
        DFS_on_grid(row, col, grid,visited,grid[row][col], color);

        return grid;
    }
};