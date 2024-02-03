//https://codeforces.com/contest/1237/problem/A
#include <iostream>
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#include<string>
#define eforl(i,s,e) for(int i=s;i<e;i++)
#include<stack>
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;




int main()
{
 fast();
 int t;
 cin>>t;
 while(t--)
 {
     vector<int> fr(26);

     int n;
     string s;
     cin>>n;
int mx_fr =-INT_MAX;
     for(int i{0};i<n;++i)
        {
            char c;
            cin>>c;
            ++fr[c-97];
             mx_fr = max(mx_fr,fr[c-97]);
        }

      if(n%2==0)
        cout<<max(0,2*mx_fr-n)<<"\n";
      else
        cout<<max(1,2*mx_fr-n)<<"\n";
 }


	return 0;
}
