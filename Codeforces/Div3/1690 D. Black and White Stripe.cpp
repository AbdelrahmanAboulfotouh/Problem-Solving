//https://codeforces.com/contest/1690/problem/D
#include <iostream>
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#define eforl(i,s,e) for(int i=s;i<e;i++)
using namespace std;
typedef long long ll;




int main()
{

int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int cnt{0};
    string str;
    cin>>str;
    for(int i{0};i<k;++i)
        if(str[i]=='W')
        ++cnt;
    int ans=cnt;

    for(int i{0};i+k<n;++i)
        {
            if(str[i]=='W')
                --cnt;
            if(str[i+k]=='W')
                ++cnt;
            ans = min(ans,cnt);
        }
        cout<<ans<<"\n";
}
	return 0;
}
