                                /*                قُلْ إِنَّ صَلاتِي وَنُسُكِي وَمَحْيَايَ وَمَمَاتِي لِلَّهِ رَبِّ الْعَالَمِيَ                  */

// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.
//https://codeforces.com/contest/580/problem/C
#include <bits/stdc++.h>
#include <cstring>
#include<algorithm>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clr cin.ignore();
        const long long N=228228;

        vector<long long> adj[N];
        long long cats[N],ans,x,y,i,j,n,m;

        void go(int node,int pr,int k)
        {
            //base case:
            if(k>m)
                return;

            int ok_step=1;
            for(int i=0;i<adj[node].size();i++)
                if(adj[node][i]!=pr)
                {
                    ok_step=0;
                    go(adj[node][i],node,k*cats[adj[node][i]]+cats[adj[node][i]]);
                }

            ans+=ok_step;
        }

        int main()
        {
            cin>>n>>m;
            //reading cats positions :
            for(i=0;i<n;i++)
                scanf("%d",&cats[i]);

            //raeding gragh edges:
            for(i=1;i<n;i++)
            {
                scanf("%d%d",&x,&y);
                x--,y--;
                adj[x].push_back(y);
                adj[y].push_back(x);
            }

            go(0,-1,cats[0]);
            cout<<ans<<"\n";
        }
