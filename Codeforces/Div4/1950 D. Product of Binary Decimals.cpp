//https://codeforces.com/contest/1950/problem/D
#include <bits/stdc++.h>
using namespace std;
bool is_binary(int &n)
{
    string str = to_string(n);
    for(auto C:str)
        if(C == '1' || C== '0');
    else
            return false;

    return true;
}

int main()
{

    int t; cin>>t;
    while (t--)
    {

       int n; cin>>n;
       bool f = true;
        while (!is_binary(n))
        {
            if(n % 10 == 0)
                n/=10;
            else if(n % 101 ==0)
                n/=101;
            else if (n%111 == 0)
                n/=111;
            else if (n %11111 == 0)
                n/=11111;
            else if (n % 11 == 0)
                n/=11;
            else
            {
                f = false;
                break;
            }
        }
        if(f)
        cout<<"YES\n";
        else
            cout<<"NO\n";

    }

   return 0;
}
