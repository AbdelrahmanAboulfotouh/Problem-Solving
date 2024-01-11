//https://codeforces.com/contest/337/problem/A
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
    {

    int n,m;
    cin>>n>>m;

    int arr[m];
    for(int i{0};i<m;++i)
        cin>>arr[i];

    sort(arr,arr+m);

    int ans=INT_MAX;
    int e=n-1;
     for(int s{0};s<m&&e<m;++s,e++)
            ans=min(ans,abs(arr[s]-arr[e]));

        cout<<ans;

    return 0;
    }
