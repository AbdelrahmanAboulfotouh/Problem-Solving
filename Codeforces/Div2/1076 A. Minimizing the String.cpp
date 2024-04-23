#include <bits/stdc++.h>
using namespace std;
int main() {

    Abulfotouh;
    int n;cin>>n;
    string s;cin>>s;
    bool f = false;
    string ans;
    for(int i{0};i<n;++i)
    {
        if(s[i]>s[i+1] && !f)
        {
            f = true;
            continue;
        }
        ans+=s[i];
    }
    if(!f)
    {
        ans.pop_back();
        

    }
    
   cout<<ans;
           return 0;
}
