//https://codeforces.com/contest/1921/problem/B
#include<iostream>
using namespace std;

int main()
    {

  int t; cin>>t;
  while(t--)
  {
       int n;
     cin>>n;
     string s,b;
     cin>>s>>b;

        int zto{0},otz{0};
     for(int i{0};i<n;++i)
        {
            if(s[i]!=b[i])
            {
                if(s[i]=='1')
                    ++otz;
                else
                    ++zto;
            }
        }


        cout<<max(otz,zto)<<"\n";
          }
    return 0;
    }
