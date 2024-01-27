//https://codeforces.com/contest/1925/problem/A
#include <iostream>
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#define eforl(i,s,e) for(int i=s;i<e;i++)
using namespace std;
typedef long long ll;


const int AKA=1000+1;
int fr[AKA];

int main()
{
    string alpha="abcdefghijklmnopqrstuvwxyz";
    int n,k;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        while(n--)
        {
            s+=alpha.substr(0, k);
        }
        cout<<s<<"\n";
    }


	return 0;
}
