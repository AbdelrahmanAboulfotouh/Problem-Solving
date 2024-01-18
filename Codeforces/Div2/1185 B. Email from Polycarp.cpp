//https://codeforces.com/problemset/problem/1185/B
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main()
    {
        map<char,short int>seen;
    int t; cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        for(int i{0};i<s1.size();++i)
            seen[s1[i]]=1;
        int idx{0};
        bool f=true;
        for(int i{0};i<s2.size();++i)
            {
                if(seen[s2[i]]!=1||s2[0]!=s1[0])
                {
                    f=false;
                    break;
                }
                if(s2[i]==s1[idx])
                    ++idx;
                    else
                    {
                        if(s2[i]!=s2[i-1]&&i>=1)
                        {f=false;break;}
                    }

            }
            if(!f||idx<s1.size())
                cout<<"NO\n";
            else
                cout<<"YES\n";
    }
    return 0;
    }
