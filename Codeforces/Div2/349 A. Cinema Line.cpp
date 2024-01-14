//https://codeforces.com/problemset/problem/349/A
#include<iostream>
#include<algorithm>

using namespace std;
int main()
    {
   int n;cin>>n;
   int B100{0},B50{0},B25{0};
   for(int i{0};i<n;++i)
    {
        int tmp;
        cin>>tmp;
        if(tmp==25)
            ++B25;
        else if(tmp==50)
        {
            ++B50;
            --B25;
        }
        else
        {
            ++B100;
            if(B50)
            {

                    --B50;
                    --B25;
            }
            else
                B25-=3;
        }

        if(B25<0||B50<0)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

    return 0;
    }
