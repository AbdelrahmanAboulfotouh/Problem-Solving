#include <bits/stdc++.h>
using namespace std;

bool could_palindrome(int sz,int ones)
{
    if((sz % 2 !=0)||(sz % 2 ==0 && ones %2 ==0) || (ones == sz) || (ones ==0))
        return true;

    return false;
}
int main() {

    Abulfotouh;
    int t;cin>>t;
    int n;string str;
    while (t--)
    {
        cin>>n;
        vector<pair<int,int>>v(n);
        map<int,bool>id;
        int t_size{0},t_ones{0},ans{0};
        int bad{0},cure{0};
        for(int i{0};i<n;++i)
        {
            cin>>str;
            for(auto &c:str)
            {
                if(c=='1')
                {
                    ++v[i].first;
                    ++t_ones;
                }
                else
                    ++v[i].second;
                ++t_size;
            }
            int siz=v[i].first+v[i].second;

                    if(siz % 2 ==0 && !could_palindrome(siz,v[i].first))
                        ++bad;
                    else if(siz % 2 !=0)
                    { cure+=(abs(siz - 2*v[i].first));++ans;}
                    else if(could_palindrome(siz,v[i].first))
                        ++ans;

        }
            int d = (bad/2)*2;
            bad-=d;
            ans+=(min(bad,cure) +d);
        cout<<ans<<"\n";
            }
           return 0;
}
