#include <iostream>
using namespace std;
int main()
{
    long long A,B;//b for sum
    cin >>A>>B;

    if(A>=1&&A<=100&&B>=1&&B<=1000)
        {
          if(B<=6*A&&B>=A)
          {
              cout<<"Yes";
          }
          else
            cout<<"No";
        }

return 0;
}
