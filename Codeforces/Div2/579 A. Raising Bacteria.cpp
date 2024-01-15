//https://codeforces.com/problemset/problem/579/A
#include<iostream>
using namespace std;

int main()
    {

           int n;
           cin>>n;
           int tmp{0};
           int cnt{0};
           while(n>0)
           {
               tmp=n%2;
               if(tmp)
                ++cnt;
               n/=2;
           }
           cout<<cnt;
    return 0;
    }
