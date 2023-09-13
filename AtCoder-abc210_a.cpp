#include<iostream>
using namespace std;

int main(){

    long long  n,a,x,y;
    cin>>n>>a>>x>>y;

    if(1<=n&&n<=1e5&&1<=a&&a<=1e5&&1<=y&&y<x&&x<=100)
    {

        long long cost{0};
       if(n>a)
       {
           cost=((n-a)*y)+(a*x);
           cout<<cost;
           }
       else if(n<=a)
        {
            cost=n*x;
           cout<<cost;
        }

    }

return 0;
}
