#include <iostream>
using namespace std;
int main()
{
    long long k;
    int ans{0};
    cin>>k;
    if(k>=2&&k<=100)
    {
        if(k%2==0)
            {ans=(k/2)*(k/2);}
        else
            {ans=((k/2)+1)*(k/2);}

        cout<<ans;

    }




   return 0;
}
