//https://codeforces.com/contest/1929/problem/A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int n;
    while (t--)
    {
        cin>>n;
        int mx= - INT_MAX;
        int mn= INT_MAX;
        for(int i{0}; i<n;++i)
        {
            int tmp;
            cin>>tmp;
            mx =max(mx,tmp);
            mn =min(mn,tmp);
        }
        cout<<abs(mx-mn)<<"\n";

    }
}
