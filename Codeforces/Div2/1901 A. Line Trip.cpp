#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
//https://codeforces.com/contest/1901/problem/A
const int AKA = 101;
int fr[AKA];
int main ()
{
    fast();
       int t; cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int stations[n];
        for(int i{0};i<n;++i)
        {
         cin>>stations[i];

        }
        int ans = stations[0];
        for(int i{1};i<n;++i)
        {
            ans = max(ans,abs(stations[i-1]-stations[i]));
        }
        ans = max(ans,abs(x-stations[n-1])*2);
        cout<<ans<<"\n";
    }
    return 0;
    }
