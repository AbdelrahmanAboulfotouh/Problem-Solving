//https://codeforces.com/contest/58/problem/A
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
    {

    int nums[3];
    int ans{1},summation{0};
    for(int i{0};i<3;++i)
        {
            cin>>nums[i];
            ans*=nums[i];
            summation+=nums[i];
        }

        ans=max(ans,(nums[2]*(nums[1]+nums[0])));
        ans=max(ans,(nums[0]*(nums[1]+nums[2])));

        ans=max(ans,summation);
        cout<<ans;
    return 0;
    }
