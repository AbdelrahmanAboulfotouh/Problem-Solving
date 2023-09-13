#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int ,int> a,pair<int ,int> b)
{
    return (a.first<b.first) || ((a.first == b.first)&& (a.second > b.second));
}

int main()
{
    int t{0};
    cin>>t;
    int n,x,y;
    while (t--)
    {
        scanf("%d",&n);
        vector<pair<int,int>>v;
        for(int i{0};i<n;++i)
        {
            scanf("%d",&x);
            scanf("%d",&y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
    sort(v.begin(),v.end(), cmp);

        for(auto &i:v)
            cout<<i.first<<" "<<i.second<<"\n";


    }
    return 0;
}
