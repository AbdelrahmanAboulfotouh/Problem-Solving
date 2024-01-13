#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
    {
       int t; cin>>t;
       while(t--)
       {
           int n,k,x;
           cin>>n>>k>>x;
 
           vector<int> V(n);
 
           for(int i{0};i<n;++i)
            cin>>V[i];
 
           sort(V.begin(),V.end());
 
           long long sum_bob{0},sum{0};
 
           for(int i=n-1;i>=n-x;--i)
            sum_bob-=V[i];
 
           for(int i{0};i<n-x;++i)
            sum+=V[i];
 
 
            //Bob only senario
            long long ans=sum+sum_bob;
 
            int vidx1=n-1,vidx2=n-x-1;
            //Alice senario
            for(int i{0};i<k;++i)
                {
                    sum_bob+=V[vidx1];
                    vidx1--;
                    if(vidx2>=0)
                    {
                        sum-=V[vidx2];
                        sum_bob-=V[vidx2];
 
                    }
                    vidx2--;
                    ans=max(ans,sum+sum_bob);
                }
                cout<<ans<<'\n';
       }
    return 0;
    }
