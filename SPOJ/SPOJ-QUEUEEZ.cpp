#include <bits/stdc++.h>
//#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long  t;
    cin>>t;
    long long  temp{0};
    queue<long long > q;
    while(t--)
        {
        cin>>temp;
        if(temp ==1)
            {
            cin>>temp;
            q.push(temp);
            }
        else if(temp==2)
        {
            if(!q.empty())
                 q.pop();
        } else if(temp==3)
        {
            if(q.empty())
                cout<<"Empty!\n";

            else
                cout<<q.front()<<"\n";

        }

        }
}
