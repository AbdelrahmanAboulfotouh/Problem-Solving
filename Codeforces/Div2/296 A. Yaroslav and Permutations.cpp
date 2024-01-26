//https://codeforces.com/contest/296/problem/A
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

    int n;
    cin>>n;
    int MX_FR=-1001;

    for(int i = 0;i<n;++i)
        {
            int temp = 0;
            cin>>temp;
            ++fr[temp];
            MX_FR=max(MX_FR,fr[temp]);
        }
if((n-MX_FR)>=(MX_FR-1))
    cout<<"YES\n";
else
    cout<<"NO\n";
	return 0;
}
