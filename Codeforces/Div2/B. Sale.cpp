//https://codeforces.com/contest/34/problem/B
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
  
    int arr[n];
    int ans{0};
  
    for(int i{0};i<n;++i)
        cin>>arr[i];
  
    sort(arr,arr+n);
    for(int i{0};i<m;++i)
        {
           if(arr[i]<0)
               ans+=abs(arr[i]);
        }
    
    cout<<ans<<'\n';

	return 0;
}
