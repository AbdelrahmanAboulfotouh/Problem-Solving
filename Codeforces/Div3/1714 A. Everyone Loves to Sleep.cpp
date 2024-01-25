//https://codeforces.com/contest/1714/problem/A
#include <iostream>
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;




int main()
{
int t;
 cin>>t;
 while (t--)
 {
     int n , H  , M;
     cin>>n>>H>>M;
    int current_time = H*60 + M;

    int ans=24*60;
    for(int i{0};i<n;++i)
        {
            int h,m;
            cin>>h>>m;
            int clock = h*60 + m -current_time;
            if(clock<0)
                clock+=24*60;
            ans = min(ans,clock);

        }
        cout<< ans/60 <<" "<< ans%60 <<"\n";

 }

return 0;
}
