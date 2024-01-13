//https://codeforces.com/problemset/problem/1475/A
#include<iostream>
using namespace std;

int main()
    {
      int t; cin>>t;
      while(t--)
      {
          long long n;
          cin>>n;
          bool f=0;
          n*=2;
          while(n/=2)
          {
              if(n%2!=0&&n>1)
              {
                  cout<<"YES\n";
                  f=1;
                  break;
              }

          }
          if(!f)
          cout<<"NO\n";
      }
    return 0;
    }
