//https://codeforces.com/contest/58/problem/A
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
    {

   string target{"hello"}, word;

   int T{0};

   cin>>word;

   for(auto c:word)
   {
       if(target[T]==c)
        ++T;
   }

   if(T>=5)
    cout<<"YES\n";
   else
    cout<<"NO\n";
    return 0;
    }
