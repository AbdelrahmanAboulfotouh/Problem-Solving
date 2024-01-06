#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{

int t; cin>>t;
while(t--)
{
    int n; cin>>n;
    int ca[2*n +1] = {0};
    int cb[2*n +1] = {0};

    int a[n];
    int b[n];
   lop(n)
        cin>>a[i];
    lop(n)
        cin>>b[i];

        int len{1};
        lop(n)
        {
            if(b[i]!=b[i+1]||i==n-1)
            {
                cb[b[i]]=max(cb[b[i]],len);
                len=1;
            }
            else
                ++len;

        }

         lop(n)
        {
            if(a[i]!=a[i+1]||i==n-1)
            {
                ca[a[i]]=max(ca[a[i]],len);
                len=1;
            }
            else
                ++len;

        }
    int ans{-1};
    lop(2*n+1)
    {
        ans=max(ans,ca[i]+cb[i]);
    }
    cout<<ans<<'\n';

}
	return 0;
}
