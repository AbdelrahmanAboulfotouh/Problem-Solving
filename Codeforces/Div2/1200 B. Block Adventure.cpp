//https://codeforces.com/contest/1200/problem/B
#include<iostream>
#include<algorithm>

using namespace std;

int main()
    {

        int t; cin>>t;
        while(t--)
        {
         int n,k;
         long long m;
         cin>>n>>m>>k;
         int arr[n];
         for(int i{0};i<n;++i)
            cin>>arr[i];
            bool f=true;
         for(int i{0};i<n-1;++i)
            {

                 m+=arr[i]-max(0,arr[i+1]-k);
                if(m<0)
                {
                    f=false;
                    break;
                }
            }

            if(f)
                cout<<"YES\n";
            else
                cout<<"NO\n";

        }
    return 0;
    }
