//https://codeforces.com/contest/1237/problem/A
#include <iostream>
#include<cmath>
#include <utility>
#include <vector>
#include<algorithm>
#define eforl(i,s,e) for(int i=s;i<e;i++)
using namespace std;
typedef long long ll;




int main()
{

    int n;
    cin>>n;
    int x{1};
    for(int i{0};i<n;++i)
        {
            int temp;
            cin>>temp;
            if(temp%2 == 0)
                cout<<(temp/2)<<"\n";
            else
                {
                    cout<<(temp + x )/2<<"\n";
                    x*=-1;
                }
        }


	return 0;
}
