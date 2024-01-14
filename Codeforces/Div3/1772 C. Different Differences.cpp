//https://codeforces.com/contest/1772/problem/C
#include<iostream>

using namespace std;
int main()
    {
    int t; cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int ai{1};
        int dif{1};
        for(int i{1};i<=k;++i)
            {
                cout<<ai<<' ';

                if(n-(ai+dif)>=k-(i+1))
                {
                    ai+=dif;
                    ++dif;
                }
                else
                    ++ai;
            }
            cout<<'\n';
    }
    return 0;
    }
