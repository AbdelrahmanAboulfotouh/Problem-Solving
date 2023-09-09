/*                قُلْ إِنَّ صَلاتِي وَنُسُكِي وَمَحْيَايَ وَمَمَاتِي لِلَّهِ رَبِّ الْعَالَمِيَ                  */

// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3104
#include <bits/stdc++.h>
#include <cstring>
#include<algorithm>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clr cin.ignore();
const int mxn=105;
char grid[mxn][mxn];
int n;
//directions
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
bool is_valid(int x,int y)
{
    return (x>=0 && x<n &&y>=0&& y<n) ;
}
void DFS(int x,int y)
{
    if(grid[x][y]=='.'||  !is_valid(x,y))
        return;

    grid[x][y]='.';

    for(int d{0};d<4;++d)
    {
        int tox=x+dx[d];
        int toy=y+dy[d];
        DFS(tox,toy);
    }

}
int main()
{
    Aboulfotouh;
    int t;
    cin>>t;
    int cse{0};
    while (t--)
    {
        cin>>n;

        for(int i{0};i<n;++i)
            for(int j{0};j<n;++j)
                cin>>grid[i][j];

        int counter{0};
        for(int i{0};i<n;++i)
            for(int j{0};j<n;++j)
            {
                if(grid[i][j]=='x')
                {
                    ++counter;
                    DFS(i,j);
                }

            }


        printf("Case %d: %d\n", ++cse, counter);

    }
    return 0;
}
