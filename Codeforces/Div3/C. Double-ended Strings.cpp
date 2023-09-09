                                /*                قُلْ إِنَّ صَلاتِي وَنُسُكِي وَمَحْيَايَ وَمَمَاتِي لِلَّهِ رَبِّ الْعَالَمِيَ                  */

// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.
//https://codeforces.com/contest/1506/problem/C
#include <bits/stdc++.h>
#include <cstring>
#include<algorithm>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clr cin.ignore();
void swtch(string &a,string &b)
{
    string temp;
    if(a.length()>=b.length());
    else
    {
        temp=a;
        a=b;
        b=temp;
    }
}


// Function to print all sub strings
void subString(string a,string b,int n)
{
    // Pick starting point
    int mx{0};
    for (int len = 1; len <= n; len++)
    {
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point.
            int j = i + len - 1;
            string sub="";
            for (int k = i; k <= j; k++)
            {

                sub+=a[k];
            }

            int x=b.find(sub);
            if(x>=0&&x<b.size())
                mx= max(mx,len);

        }
    }
    cout<<(a.length()+b.length())-(mx*2)<<'\n';
}

// Driver program to test above function
    int main()
    {
   int t;
   cin>>t;
   string a,b;
        while (t--)
        {
            cin>>a>>b;
            if(a==b)
            {
                cout<<'0'<<"\n";
            }
            else
            {
                swtch(a,b);
                subString(a,b,a.length());
            }



        }
    return 0;
    }
