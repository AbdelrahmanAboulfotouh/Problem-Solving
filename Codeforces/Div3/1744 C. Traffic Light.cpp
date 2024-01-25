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

    int n;
    char x;
    string s;
    cin>>n>>x>>s;
        s+=s;

    if(x=='g')
    {
        cout<<"0\n";
        continue;
    }
    int ans{0};
    bool flag = false ;
    int cnt{0};
    for(int i{0};i<2*n;++i)
        {
            if(s[i] == x && flag == false )
            {
                flag = true;
                continue;
            }


            if(flag && s[i]!='g')
                ++cnt;
            else if(flag && s[i] == 'g')
            {
                ++cnt;
                ans = max(ans,cnt);

                cnt=0;
                flag =false ;
            }

        }
        cout<<ans<<"\n";
}
	return 0;
}
