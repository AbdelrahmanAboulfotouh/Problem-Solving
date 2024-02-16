//https://codeforces.com/contest/1929/problem/B
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int n,k;
    while (t--)
    {
        cin>>n;cin>>k;
        int ans = (k+1)/2 ;


        if(k == 4*n-2)
        {
            if(ans %2 !=0)
                ans+=1;
        }
cout<<ans<<"\n";




    }
}
