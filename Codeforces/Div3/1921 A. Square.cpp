//https://codeforces.com/contest/1921/problem/A

#include<iostream>
#include<algorithm>
using namespace std;

int main()
    {

  int t; cin>>t;
  while(t--)
  {
      int x,y;
      int mnx=INT_MAX,mny=INT_MAX  ,mxx{-1001},mxy{-1001};
     for(int i{0};i<4;++i)
        {
            cin>>x>>y;

            mnx=min(mnx,x);

            mxx=max(mxx,x);

            mny=min(mny,y);

            mxy=max(mxy,y);
        }
       
        long long ans=abs(max(mnx,mxx)-min(mxx,mnx))*(max(mny,mxy)-min(mxy,mny));
        cout<<ans<<"\n";
  }
    return 0;
    }
