#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Abulfotouh     ios_base::sync_with_stdio(false),     cin.tie(NULL)
void perfix_sum(vector<int> &v,vector<long long > &perfix,int size)
{
    for(int i{1};i<=size;++i)
    {
        perfix[i]=perfix[i-1]+v[i-1];
    }

}
int main() {
    Abulfotouh;
   int n,q;cin>>n>>q;
   vector<int>v(n);
   for(auto &i:v)
       cin>>i;
   vector<ll>perfix(n+1);
    perfix_sum(v,perfix,n);
    int l,m;
    while (q--)
    {
        cin>>l>>m;
        cout<<(ll)perfix[m]-perfix[l-1]<<"\n";

    }

    return 0;
}
