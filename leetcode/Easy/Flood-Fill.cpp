class Solution {
public:
bool is_vaild(int r, int c, vector<vector<int>> & mat)
{
    if(r < 0 || r >= mat.size())
        return false;
    if(c < 0 || c >= mat[0].size())
        return false;
    
    return true;
}
void DFS_on_grid(int i, int j , vector<vector<int>> & grid, vector<vector<bool>> & visited, int old_color, int new_color)
{
    if(!is_vaild(i,j,grid) || visited[i][j] || grid[i][j] != old_color)
        return;

    visited[i][j] = true;
    grid[i][j] = new_color;
    //gernerate edges and DFS on all of them
    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};
    for(int di{0};di<4;++di)
        DFS_on_grid(i + dx[di], j + dy[di], grid, visited, old_color, new_color);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        vector<vector<bool>> visited(image.size(), vector<bool>(image[0].size()) );
        DFS_on_grid(sr, sc, image, visited, image[sr][sc], color);
        return image;    
    }
};