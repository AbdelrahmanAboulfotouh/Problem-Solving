//https://codeforces.com/problemset/problem/149/A
#include<iostream>
#include<algorithm>
using namespace std;

int main()
    {

        int k;
        cin>>k;

        int m[12];
        int c{0};
        for(int i{0};i<12;++i)
            {
            cin>>m[i];
            }
            sort(m,m+12);
            int ans{1};
            if(!k)
                ans=0;

            for(int i=11;i>=0;--i,++ans)
            {
                c+=m[i];
                if(c>=k)
                {
                    cout<<ans<<"\n";
                    return 0;
                }
            }

            cout<<-1;
    return 0;
    }
