// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.

//https://vjudge.net/problem/UVA-476
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clr cin.ignore();
#define l "\n"
#define ll long long

int main()
{

  vector<tuple<double,double,double,double>>points;
  char c;
    double x,y,x1,y1;
    while (true)
    {
        cin>>c;
        if(c=='*')
        {
            //cout<<"T1\n";
            break;

        }

        cin>>x>>y>>x1>>y1;
        points.push_back({x,y,x1,y1});
    }
    int p{0};
    while (true)
    {
        cin>>x>>y;
        if(x==9999.9&&y==9999.9)
        {
           // cout<<"T2\n";
            break;

        }
        ++p;
        bool f{0};
        for(int i{0};i<points.size();++i)
        {
            if(x>get<0>(points[i])&&x<get<2>(points[i])&&y<get<1>(points[i])&&y>get<3>(points[i]))
            {
            cout<<"Point "<<p<<" is contained in figure "<<i+1<<"\n";
            f= true;

            }
        }
            if(!f)
            {
                cout<<"Point "<<p<<" is not contained in any figure\n";
            }

    }
    return 0;
}
