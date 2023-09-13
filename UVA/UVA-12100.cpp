#include <bits/stdc++.h>
#include <stack>
#include <cmath>
#define ll long long
#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main()
{
    fast();
    int t;
    cin>>t;
    int n,idx;
    int temp;
    while(t--) {
        cin >> n >> idx;
        vector<int> printer;
        queue<pair<int,int>>container;
        for (int i{0}; i < n; ++i) {
            cin >> temp;

            printer.push_back(temp);
            container.push(make_pair(temp,i+1));


        }
        sort(printer.begin(), printer.end());
        int ans{0};
        int mx=n-1;
        while (!container.empty())
        {
            pair<int,int> head=container.front();
            container.pop();
            if (head.first<printer[mx])
            {
                container.push(head);
            }
            else
            {
                ++ans;

                if(head.second==idx+1)
                    cout<<ans<<"\n";
                --mx;

            }




        }



    }
    return 0;
}
