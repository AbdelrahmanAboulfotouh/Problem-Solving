#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

 long long MOD( long long x, long long y)
        {
            while(x<0)
            {
                x+=y;
            }
        return (x%y);
        }

    long long MOD_addition(long long a, long long b,long long y)
        {
        // ( a + b ) % y :
        long long ans = (( a%y ) + ( b%y )) % y;

        return ans;
        }

    long long MOD_subtraction(long long a, long long b , long long y)
        {
            // ( a - b ) % y :
            long long ans = (( a%y ) - ( b%y ) + y) % y;

        return ans;
        }

     long long MOD_multiplication(long long a, long long b, long long y)
        {
            //(a * b ) % y :
         long long ans = ((a%y) * (b%y) ) % y ;

         return ans ;

        }

        long long MOD_division(long long a, long long b, long long y)
        {
            // (a / b) % y :
         long long ans = ((a%y) * ((1/b)%y) ) % y ;

         return ans ;

        }



int main()
{
long long x,a,b,y;
cin>>x>>a>>b>>y;
cout<<MOD(x,y)<<"\n"
    <<MOD_addition(a,b,y)<<"\n"
    <<MOD_subtraction(a,b,y)<<"\n"
    <<MOD_multiplication(a,b,y)<<"\n"
    <<MOD_division(a,b,y);



}
