//https://codeforces.com/problemset/problem/96/A
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{

        string s;
        cin>>s;
        int ONES{-1},ZEROS{-1},o{0},z{0};
        for(int i{0};i<s.size();++i)
            {
                if(s[i]=='1')
                    ++o;
                if(s[i]=='0')
                    ++z;
               if(s[i]!=s[i+1]||i==s.size()-1)
               {
                   ONES=max(ONES,o);
                   ZEROS=max(ZEROS,z);
                   o=0;
                   z=0;
               }


            }

            if(ONES>=7||ZEROS>=7)
                cout<<"YES\n";
            else
                cout<<"NO\n";
	return 0;
}
