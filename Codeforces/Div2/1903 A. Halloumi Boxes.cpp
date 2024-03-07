#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);


int main ()
{
    fast();
int t; cin>>t;
while(t--)
{
    int x,y; cin>>x>>y;
    bool is_sorted = true;
    int arr[x];
    for(int i{0};i<x;++i)
    {
        cin>>arr[i];
    }
    for(int i{1};i<x;++i)
    {
        if(arr[i-1]>arr[i])
        {
            is_sorted = false;
            break;
        }
    }
    if(is_sorted||(!is_sorted&&y>1))
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
    return 0;
    }
