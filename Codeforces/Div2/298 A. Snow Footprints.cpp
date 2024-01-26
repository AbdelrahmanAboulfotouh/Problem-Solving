//https://codeforces.com/contest/298/problem/A
#include <iostream>
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#define eforl(i,s,e) for(int i=s;i<e;i++)
using namespace std;
typedef long long ll;




int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int LS{1001},LE{-1},RS{1001},RE{-1};
    for(int i{0} ; i<n ; ++i)
        {
            if(s[i] == 'L')
            {
                LS=min(LS,i+1);
                LE=max(LE,i+1);
            }

            if(s[i] == 'R')
            {
                RS=min(RS,i+1);
                RE=max(RE,i+1);
            }
        }
        if(RS<1001)
        {
            if(LS==1001)
                 RE+=1;

            cout<<RS<<" "<<RE<<"\n";
        }

        else
        {
            if(RS==1001)
               {
                   LS-=1;
            cout<<LE<<" "<<LS<<"\n";
               }
               else
            cout<<LS<<" "<<LE<<"\n";
        }

	return 0;
}
