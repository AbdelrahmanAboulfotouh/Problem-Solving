#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n; cin>>n;
  vector<deque<int>>V(n);
  bool T = false;
  int x{1};// [1 - n^2]
  for(int i{0};i<n;++i)
  {
      for(int j{0};j<n;++j,++x)
      {
          if(!T)
          V[i].push_front(x);
          else
              V[i].push_back(x);
      }
      //toggling
      T = !T;
  }
    while (!V[0].empty())
    {
        for(int i{0};i<n;++i)
        {
            cout<<V[i].front()<<" ";
            V[i].pop_front();
        }
        cout<<"\n";
    }





          return 0;
}
