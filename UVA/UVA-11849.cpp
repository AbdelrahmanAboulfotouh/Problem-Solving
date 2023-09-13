#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define l cout<<"\n"
#define fast() ios::sync_with_stdio(false);cin.tie(nullptr);

int main(){
    fast();
  int n,m;
    while(true)
    {
        cin>>n>>m;
        if(n==0&&m==0)
            break;
      vector<int>a(n),b(m);
      for(int i{0};i<n;++i)
          cin>>a[i];
        for(int i{0};i<n;++i)
            cin>>b[i];
        int ans=0;
        for(int i{0},j{0};i<n,j<m;)
        {
            if(a[i]==b[j])
            {
                ans++;
                i++;
                j++;
            }
            else if(a[i]<b[j])
                ++i;
            else
                ++j;

        }
        cout<<ans;l;
    }
    return 0;
}
