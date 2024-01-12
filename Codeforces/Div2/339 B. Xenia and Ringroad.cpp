//https://codeforces.com/contest/58/problem/A
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
    {
        int n,m; cin>>n>>m;

        int arr[m];
        for(int i{0};i<m;++i)
            cin>>arr[i];
            long long  ans=arr[0]-1;
               for(int i{0} ;i < m-1 ; ++i)
                {
                    int temp=arr[i+1]-arr[i];
                    if(temp<0)
                        temp+=n;
                    ans+=temp;
                }
                cout<<ans;

    return 0;
    }
