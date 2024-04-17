#include <bits/stdc++.h>
using namespace std;
bool asending(pair<int,int> &p1,pair<int,int> &p2)
{
    if(p1.first == p2.first)
    {
        return p1.second>p2.second;
    }
    return p1.first<p2.first;
}
int main() {
    Abulfotouh;
    int t;cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int k;cin>>k;
        vector<pair<int,int>>v(n);
        for(int i{0};i<n;++i)
            {
                cin>>v[i].first;
                v[i].second=i;
            }
        for(auto &i:v)
        {
            if(i.first%k == 0)
                i.first=k;
            else
            i.first%=k;
        }
        std::sort(v.rbegin(), v.rend(),asending);
        for(auto &i:v)
        {
            cout<<i.second+1<<" ";
        }
        cout<<"\n";
    }



    return 0;
}
