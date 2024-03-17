#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
int countingValleys(int &steps ,string &path)
{

}
int main ()
{
    fast();
    int t;cin>>t;
    while (t--)
    {
        string str;
        cin >> str;
        string T;
        int Z{0}, O{0};
        for (auto c: str)
        {
            if (c == '1')
                ++O;
            else
                ++Z;
        }
        for (auto c: str)
        {
            if(c == '1')
            {
                if(Z)
                {
                    T+='0';
                    --Z;
                }
                else
                    break;
            }
            if(c == '0')
            {
                if(O)
                {
                    T+='1';
                    --O;
                }
                else
                    break;
            }

        }
cout<<str.size() - T.size()<<"\n";


    }
            return 0;
    }
