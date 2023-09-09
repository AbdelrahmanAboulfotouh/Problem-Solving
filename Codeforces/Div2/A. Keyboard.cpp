//https://codeforces.com/contest/474/problem/A
#include <bits/stdc++.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string  ans="";
    string input;
    char d;
    cin>>d>>input;
    for(int j{0};j<input.length();++j)
    {
        for(int i{0};i<key.length();++i)
            if(input[j]==key[i])
            {
                if(d=='R')
                    ans+=key[i-1];
                else
                    ans+=key[i+1];
            }
    }
    cout<<ans;
    return 0;
}
