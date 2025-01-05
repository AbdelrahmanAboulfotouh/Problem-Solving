class Solution {
public:
    
  bool isValidSudoku(vector<vector<char>>& board)
{
    //row-check,RF
    for(int i{0};i<9;++i)
    {
        int mp [10] = {0},mp2[10] = {0};
       //map<char,int>mp,mp2;
        for(int j{0};j<9;++j)
        {
            if((board[i][j] -'0')>=1 and (board[i][j]-'0') <=9) {
                mp[board[i][j]-'0']++;
                if (mp[board[i][j]-'0'] > 1)
                    return false;
            }
            if((board[j][i] -'0')>=1 and (board[j][i]-'0') <=9)
            {
                mp2[board[j][i] - '0']++;
                if (mp2[board[j][i] - '0'] > 1)
                    return false;
            }


        }
    }

    //sub_boxes - Check, SF

    for(int y{0};y<3;++y)
        for(int x{0};x<3;++x)
        {
            int mp [10] = {0};
            for(int i = x*3;i<3*(x+1);++i)
            {
                for(int j = y*3;j<3*(y+1);++j) {
                    if ((board[i][j] - '0') >= 1 and (board[i][j] - '0') <= 9) {

                        mp[board[i][j]-'0']++;
                        if (mp[board[i][j]-'0'] > 1)
                            return false;

                    }
                }
            }
        }



    return true;
}
};