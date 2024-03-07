#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
//https://codeforces.com/problemset/problem/1900/A
const int AKA = 101;
int fr[AKA];
int main ()
{
    fast();
       int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        int d{0};
        int sub{0};
        int x{0};
        for(int i{0};i<n;++i)
        {
            char c = s[i];
            if(c == '.')
            {
                ++d;
                ++x;
            }

            if( c == '#'|| i == n-1)
            {
                sub =max(sub,x);
                x = 0;
            }

        }

        if(sub >=3)
            cout<<"2\n";
        else
            cout<<d<<"\n";
    }
    return 0;
    }
