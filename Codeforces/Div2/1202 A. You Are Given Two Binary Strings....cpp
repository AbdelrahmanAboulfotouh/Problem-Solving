//https://codeforces.com/contest/1202/problem/A
#include <iostream>

#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#include<string>
#define eforl(i,s,e) for(int i=s;i<e;i++)
#include<stack>
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;




int main()
{
 fast();
 int t;
 cin>>t;
 while(t--)
 {
     string s1,s2;
     cin>>s1>>s2;
     reverse(s1.begin(),s1.end());
     reverse(s2.begin(),s2.end());
     int ans{0};
     for(int i{0};i<s2.size();++i)
        {
            if(s2[i] == '1')
            {
                for(int j = i;j<s1.size();++j)
                    {
                        if(s1[j] == '1')
                        {
                            ans = abs(i-j);
                            break;
                        }
                    }
                    break;
            }
        }
        cout<<ans<<"\n";
 }
	return 0;
}
