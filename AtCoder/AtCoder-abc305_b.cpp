#include<iostream>
using namespace std;

int main(){
    string points="ABCDEFG";
   int dictances[7]={0,3,1,4,1,5,9};
   char x,y;
   cin>>x>>y;
   int idx,idy;
   for(int i{0};i<points.size();++i)
    {
    if(points[i]==x)
    idx=i;
    if(points[i]==y)
        idy=i;
    }

    int ans={0};
    for(int i=min(idx,idy)+1;i<=max(idx,idy);++i)
        ans+=dictances[i];
    cout<<ans;
    return 0;
}
