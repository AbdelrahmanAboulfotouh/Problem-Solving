#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main()
{
   fast();
    ll q;
    cin>>q;
    string command;
    deque<ll> bag;
    ll n;
    int direction =0;
    while (q--)
    {

        cin>>command;
        if(command=="back")
        {
            if(!bag.empty())
            {
                if(!direction)
                {
                    cout<<bag.back()<<"\n";
                    bag.pop_back();
                }
                else
                {
                    cout<<bag.front()<<"\n";
                    bag.pop_front();
                }

            }
            else
                cout<<"No job for Ada?\n";
        }

        else if (command=="front")
        {
            if(!bag.empty())
            {
                if(!direction)
                {
                    cout<<bag.front()<<"\n";
                    bag.pop_front();
                }
                else
                {
                    cout<<bag.back()<<"\n";
                    bag.pop_back();
                }

            } else
                cout<<"No job for Ada?\n";

        }

        else if(command=="reverse")
        {
            if(direction)
                direction=0;
            else
                direction=1;
        }
        else if(command=="push_back")
        {
            cin>>n;
            if(!direction)
                bag.push_back(n);
                 else
                bag.push_front(n);

        }

        else if(command=="toFront")
        {
            cin>>n;
            if(!direction)
            bag.push_front(n);
            else
                bag.push_back(n);
        }



    }

    return 0;
}
