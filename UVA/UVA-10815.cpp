#include <bits/stdc++.h>
#include <deque>
#include <set>
#include <string>
using namespace std;

bool is_char(char c)
{
    return (c>='a'&&c<='z');
}

int main()
{
  // ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    string in;
    set<string>dictionary;
    string word="";
    while (cin >> in)
    {
        for(int i{0};i<in.size();++i)
        {
            char c= tolower(in[i]);
            if(is_char(c))
                word+=c;
            else if(word !="")
            {
                dictionary.insert(word);
                word="";
            }

        }
       if(word !="")
        {
            dictionary.insert(word);
            word="";
        }
    }
    for(auto &i:dictionary)
        cout<<i<<"\n";
    return 0;
}
