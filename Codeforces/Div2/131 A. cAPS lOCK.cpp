//https://codeforces.com/problemset/problem/131/A
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
    {
       string str; 
        cin>>str;
        
       bool f=false;
        int u{0};
        
       for(int i{0};i<str.size();++i)
                if(isupper(str[i]))
                    ++u;
        
            if(u==str.size()||(u==str.size()-1&&islower(str[0])))
                    f=true;
            if(f)
            {
                for(int i{0};i<str.size();++i)
                if(isupper(str[i]))
                    str[i]=(tolower(str[i]));
                else
                    str[i]=(toupper(str[i]));

            }
             cout<<str;

    return 0;
    }
