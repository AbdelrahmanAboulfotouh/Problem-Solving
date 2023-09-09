//https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int sz;
  cin>>sz;
  int arr[sz];
  for(int i{0};i<sz;++i)
      cin>>arr[i];
  int flag{0},s{0},d{0};


int ids=0,ide=sz-1,temp{0};
    while (sz--)
    {
        if(arr[ids]>arr[ide])
        {
            temp=arr[ids],ids+=1;

        }
        else
        { temp=arr[ide],ide-=1;}

        if(flag==0)
        {
            s+=temp;
            flag=1;
            continue;
        }
        else
        {
            d+=temp;
            flag=0;
            continue;
        }


    }






  cout<<s<<" "<<d;
    return 0;
}
