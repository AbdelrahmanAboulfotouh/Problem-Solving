#include<iostream>
using namespace std;


int main()
{
    int aa[7]={1,3,5,7,8,10,12};
   int bb[4]={4,6,9,11};
   int xx=0,yy=0 ,x,y;
   cin>>x>>y;
   for (int i=0;i<7;i++)
   {
     if(x==aa[i])
     xx=1;
    if(y==aa[i])
    yy=1;
   }
    for(int j=0;j<4;j++)
    {
        if(x==bb[j])
        xx=2;
        if(y==bb[j])
        yy=2;
    }
if(xx==yy)
cout<<"Yes";
else
cout<<"No";
    return 0;
}
