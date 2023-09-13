/*                قُلْ إِنَّ صَلاتِي وَنُسُكِي وَمَحْيَايَ وَمَمَاتِي لِلَّهِ رَبِّ الْعَالَمِيَ                  */

// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.
#include <bits/stdc++.h>
#include <cstring>
#include<algorithm>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clr cin.ignore();
#define l "\n"
const int AKA=100+1;
vector<int>fr(AKA,0);

int main()
{
    Aboulfotouh;
    int n,m,b;
    cin>>n>>m;
    int temp;
    while (n--)
    {
        cin>>b;
        while (b--)
        {
            cin>>temp;
            ++fr[temp];
        }
    }
    for(int i{1};i<=m;++i)
    {
        if(fr[i]==0)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
