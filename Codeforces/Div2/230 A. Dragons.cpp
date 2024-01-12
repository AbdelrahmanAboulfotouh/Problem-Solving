//https://codeforces.com/contest/58/problem/A
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
    {
      int s,n; 
      cin>>s>>n;
        vector<pair<int,int>> v(n);
        for(int i{0};i<n;++i)
        cin>>v[i].first>>v[i].second;
      
        sort(v.begin(),v.end());
      
        for(int i{0};i<n;++i)
            {
                if(v[i].first>=s)
                {
                    cout<<"NO\n";
                    return 0;
                }
                s+=v[i].second;
            }

        cout<<"YES\n";

    return 0;
    }
