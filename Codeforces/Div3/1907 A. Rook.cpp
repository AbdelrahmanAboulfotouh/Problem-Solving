//https://codeforces.com/contest/1907/problem/A
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#define eforl(i,s,e) for(int i=s;i<e;i++)
using namespace std;
typedef long long ll;





int main()
{
string board ="abcdefgh";
string s;
int t;cin>>t;
while(t--)
{
    cin>>s;
for(int i{0};i<8;++i)
{
    if(s[1]-'0' == i+1)
        continue;
    cout<<s[0]<<i+1<<"\n";
}
for(int i{0};i<8;++i)
    {
        if(s[0] == board[i])
            continue;

        cout<<board[i]<<s[1]<<"\n";
    }
}


	return 0;
}
