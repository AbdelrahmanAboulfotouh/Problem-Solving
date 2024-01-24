//https://codeforces.com/contest/287/problem/A
#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
int main(){

    char grid[4][4];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            cin>>grid[i][j];


        int dx[]={0,1,1};
        int dy[]={-1,-1,0};

        bool flag = false;

        for(int i{0};i<4;++i)
            {

                for(int j{0};j<4;++j)
                    {
                         int dot_count{0},hash_count{0};
                     if(grid[i][j]=='.')
                            ++dot_count;
                     else
                        ++hash_count;

                     for(int k{0};k<3;++k)
                        {
                            int ni=i+dx[k];
                            int nj=j+dy[k];

                            if(ni>=0&&ni<=3&&nj>=0&&nj<=3)
                            {
                                if(grid[ni][nj]=='.')
                                    ++dot_count;
                                else
                                    ++hash_count;
                            }
                        }
                     if(dot_count>=3||hash_count>=3)
                     {
                         flag = true ;
                         break;
                     }
                    }


                    if(flag)
                        break;

            }

            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";





}
