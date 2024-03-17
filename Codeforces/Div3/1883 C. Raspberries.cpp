#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
int countingValleys(int &steps ,string &path)
{

}
int main ()
{
    fast();
    int t;cin>>t;
    while (t--)
    {

        int n,k;
        cin>>n>>k;
        int arr[n];
        int ans =INT_MAX;
        int ev{0};
       for(int i{0};i<n;++i)
           {
               cin>>arr[i];
               if(arr[i] % 2 == 0)
                   ++ev;
               if(arr[i] % k == 0)
                    ans = 0;
               ans =min(ans,k - (arr[i] % k));
           }
       if(k == 4)
       {
           if(ev>=2)
               ans = 0;
           else if(ev ==1)
               ans = min(ans,1);
           else 
               ans =min(ans,2);
       }
              cout<<ans<<"\n";
    }
            return 0;
    }
