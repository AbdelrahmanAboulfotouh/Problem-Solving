#include <iostream>
using namespace std;
int main()
{
long long X,A,B;
cin >>X>>A>>B;
if(A>=1&&A<=1e9&&B>=1&&B<=1e9&&X>=1&&X<=1e9)
{


if (A>=B )
cout<<"delicious";
else if ( X>=(B-A)) {
cout<<"safe"; }
else{
cout<<"dangerous";}

}
return 0;
}
