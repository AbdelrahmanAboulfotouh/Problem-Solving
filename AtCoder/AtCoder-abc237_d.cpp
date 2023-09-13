#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#define ll long long
//#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main()
{
    //fast();
 int n;
 string s;
 cin>>n>>s;
deque<ll>q;
for(ll i=n;i>=0;--i)
{
    if(s[i]=='L')
        q.push_back(i);
    else
        q.push_front(i);
}
for(int i{0};i<=n;++i)
{
    cout<<q[i];
    if(i!=n)
        cout<<" ";
}

    return 0;
}
