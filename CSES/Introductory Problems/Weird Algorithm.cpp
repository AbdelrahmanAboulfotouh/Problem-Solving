#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Abulfotouh     ios_base::sync_with_stdio(false),     cin.tie(NULL)
int main() {
    Abulfotouh;
   long long n;cin>>n;
    cout<<n<<" ";
    while(n>1)
   {
       if(n % 2 == 0)
       {
            n/=2;
       }
       else
       {
           n*=3;
           n++;
       }
       cout<<n<<" ";
   }
    return 0;
}
