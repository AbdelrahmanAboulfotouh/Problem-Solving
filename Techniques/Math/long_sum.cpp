
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string long_summtion(string x,string y)
    {
            string ans;
                //x < y
            if(x.size()>y.size())
        {
            ans=y;
             y=x;
            x=ans;
        }
           ans="";
    
            reverse(x.begin(),x.end());
             reverse(y.begin(),y.end());
            short int s{0},c{0};
            for(int i{0};i<y.size();++i)
            {
                if(i<x.size())
               {
    
                s=(x[i]-'0')+(y[i]-'0')+c;
                ans+=(s%10 +'0');
                c=s/10;
                }
                else
                {
                   s=(y[i]-'0')+c;
                    ans+=(s%10+'0');
                    c=s/10;
                }
            }
    if(c)
        ans+=c+'0';
    reverse(ans.begin(),ans.end());
      
      return ans;
    }

int main()
    {
       string s1,s2;
       cin>>s1>>s2;
       cout<<long_summtion(s1,s2);
    return 0;
    }
