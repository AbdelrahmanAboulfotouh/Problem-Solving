//https://codeforces.com/problemset/problem/766/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool win(ll a,ll b,ll c)
{
    if(a +b > c and a+c >b and b+c>a)
        return true;
    return false;
}

int main()
{
    int n;cin>>n;
    ll arr[n];
    for(int i{0};i<n;++i)
    {
        cin>>arr[i];
    }
    bool F = false;
    sort(arr,arr+n);
for(int i{0};i<n-2;++i)
{
        if(arr[i] + arr[i + 1] > arr[i +2 ] )
        {
            if(win(arr[i],arr[i+1],arr[i+2]))
            {
                F = true;
                break;
            }
        }
    }
    if(F)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
