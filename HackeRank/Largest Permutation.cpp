#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N; cin>>N;
    int K;cin>>K;
   vector<int>V(N);
   unordered_map<int,int>mp(N);
   for(int i{0};i<N;++i)
   {
       cin>>V[i];
       mp[V[i]] = i;
   }
   for(int i{0};i<N;++i)
   {
       if(V[i] != N-i && K)
       {
           --K;
           int tmp = V[i];
           V[i]=N-i;
           int idx = mp[V[i]];
           V[idx]=tmp;
          mp[tmp]=idx;
          mp[V[i]]=i;
       }
   }
   for(auto  i: V)
       cout<<i<<" ";
   return 0;
}
