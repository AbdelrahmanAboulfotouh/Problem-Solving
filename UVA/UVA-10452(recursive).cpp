
/*                قُلْ إِنَّ صَلاتِي وَنُسُكِي وَمَحْيَايَ وَمَمَاتِي لِلَّهِ رَبِّ الْعَالَمِيَ                  */
// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.
#include <bits/stdc++.h>
#include <cstring>
#include<algorithm>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clr cin.ignore();
const int sz=8+1;
int t,n,m;
char grid[sz][sz];
vector<string>ans;
string path="IEHOVA#";
//dirstions&&commands
int dx[]={-1,0,0};
int dy[]={0,-1,1};
string command[]={"forth", "left", "right"};
bool is_vaild(int nx,int ny)
{
    return (nx<n && nx>=0 && ny<m &&ny>=0);
}

void DFS(int nx,int ny,int idx)
{
    //base case:
    if(idx > path.size())
        return;
    for(int d{0};d<3;++d)
    {
        int tox=nx+dx[d];
        int toy=ny+dy[d];
        if(is_vaild(tox,toy)&&grid[tox][toy]==path[idx])
        {
            ans.push_back(command[d]);
            DFS(tox,toy,idx+1);
        }
    }
}

int main()
{
    Aboulfotouh;


    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        pair<int,int>st;
        for(int i{0};i<n;++i)
        {
            for(int j{0};j<m;++j)
            {
                cin>>grid[i][j];
                if(grid[i][j]=='@')
                { st.first=i,st.second=j;}
            }

        }
        ans.clear();
        DFS(st.first,st.second,0);
        cout<<ans[0];
        for(int i{1};i<ans.size();++i)
            cout<<" "<<ans[i];
        cout<<"\n";

    }
    return 0;
}
