class Solution {
public:
bool is_vaild(int r, int c, vector<vector<int>> &mat)
{
    if(r < 0 || r>= mat.size())
        return false;
    if(c < 0 || c >= mat[0].size())
        return false;
    
    return true;
}
void DFS_on_grid(int i, int j, vector<vector<int>> &grid1, vector<vector<int>> &grid2, vector<vector<bool>> &visited,int &connected_elements,int  &is_land_in_grid1)
{
    if(!is_vaild(i, j, grid2) || visited[i][j] || grid2[i][j] == 0)
        return;
    visited[i][j] = true;
    ++connected_elements;
    if(grid1[i][j] == 1)
        ++is_land_in_grid1;

    int dx[] = {0,0,1,-1};
    int dy[] = {-1,1,0,0};

    for(int di{0};di<4;++di)
        {DFS_on_grid(i+dx[di], j + dy[di], grid1,grid2, visited, connected_elements,is_land_in_grid1);}
}



    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int sub_islands_counter{0};
        vector<vector<bool>>visited2(grid2.size(),vector<bool>(grid2[0].size()));

        for(int gx{0};gx<grid1.size();++gx)
        {
            for(int gy{0};gy<grid1[0].size();++gy)
            {
               
                int connected_elemnts{0};
                int is_land_in_grid1{0};
                DFS_on_grid(gx, gy,grid1, grid2, visited2, connected_elemnts, is_land_in_grid1);
                if(is_land_in_grid1 == connected_elemnts and is_land_in_grid1 != 0)
                    ++sub_islands_counter;

            }
        }
        return sub_islands_counter;
    }
};