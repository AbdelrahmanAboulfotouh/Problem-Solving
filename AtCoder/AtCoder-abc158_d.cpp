
#include <bits/stdc++.h>
#include <vector>
#include <deque>
#include <cmath>
#define ll long long
#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main()
{
    fast();
    string x;
    cin>>x;
    deque<char> str;
    int j{0};
    for(auto i:x)
    {
        str.push_back(i);

    }




    int q;
    cin>>q;
    int t,f;
    char c;
    int flag=0;
    while (q--)
    {
        cin>>t;
        if(t==2)
        {
            cin>>f>>c;
            if(flag==0)
            {
                if(f==1)
                    str.push_front(c);
                else
                    str.push_back(c);
            } else
            {
                if(f==2)
                    str.push_front(c);
                else
                    str.push_back(c);
            }
        }
        else
        {
            if(flag)
                flag=0;
            else
                flag=1;
        }

    }
    if(flag==0)
        for(auto i: str)
            cout<<i;
    else
        for(int i=str.size()-1;i>=0;--i)
            cout<<str[i];

    return 0;
}
