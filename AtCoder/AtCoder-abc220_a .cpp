#include <iostream>
using namespace std;
int main()
{
     long long a,b,c;
     cin>>a>>b>>c;
     if(a>=1&&b>=1&&c>=1&&a<=1000&&b<=1000&&c<=1000)
     {
         for(long long i=a;i<=b;++i)
         {
             if(i%c==0)
                {
                cout<<i;
                break;
                }
            if(i==b)
                cout<<-1;

         }
     }

   return 0;
}
