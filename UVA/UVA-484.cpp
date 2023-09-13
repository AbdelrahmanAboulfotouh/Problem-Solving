#include <bits/stdc++.h>
#include <cstdio>
#include <set>
#include <string>

using namespace std;



int main()
{

  int n{0};
  int t=10;
vector<int>nums;
  map<int,int>fr;
    while (scanf("%d", &n) != EOF)
    {

        //cout<<n<<"*\n";
        if(fr[n]==0)
            fr[n]=1;
        else
            ++fr[n];
        if(fr[n]==1)
        nums.push_back(n);
    }

    for(auto &i:nums)
    {
        cout<<i<<" "<<fr[i]<<"\n";
    }

    return 0;
}
