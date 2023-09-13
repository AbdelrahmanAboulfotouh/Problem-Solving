
#include <iostream>

using namespace std;

int main()
{
 double X  ;
 cin >> X  ;
int Y = (X-int(X))*10 ;

      if (Y>=0 && Y<=2)
    cout <<int(X) << "-" ;
 else if (Y>=3 && Y<=6)
    cout << int(X) ;
 else if (Y>=7 && Y<=9)
    cout << int(X) << "+" ;
        return 0;
}





