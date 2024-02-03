//https://codeforces.com/contest/1907/problem/B
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
string s;
int t;
cin>>t;
 
while(t--)
{
    cin>>s;
 
    stack<int>vb;
    stack<int>VB;
 
 
    for(int i{0};i<s.size();++i)
        {
            if(s[i] == 'b')
            {
                s[i] = ' ';
 
                 vb.push(i);
            }
 
            else if(s[i] == 'B')
            {
                 s[i] = ' ';
 
                VB.push(i);
            }
 
        }
        for(int i = s.size()-1;i>=0;--i)
            {
                if(!vb.empty()&&islower(s[i])&&vb.top()>i)
                    {
                        s[i]=' ';
                        vb.pop();
 
                    }
                else if(!VB.empty()&&isupper(s[i])&&VB.top()>i)
                {
                    s[i] = ' ';
                    VB.pop();
 
                }
            }
        for(auto i:s)
            if(i == ' ')
            continue;
        else
            cout<<i;
        cout<<"\n";
 
}
 
 
	return 0;
}
