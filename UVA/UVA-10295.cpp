#include <bits/stdc++.h>
#include <set>
#include <string>

using namespace std;

inline bool IsLowerCharacter(char c)
{
    return c >= 'a' && c <= 'z';
}

int main()
{
    int m,n;
    cin>>m>>n;

    map<string,int>keys;
    while (m--)
    {
        string temp1;
        int temp2;
        cin>>temp1>>temp2;
       // cout<<temp1<<temp2<<"\n";
        keys[temp1]=temp2;
    }
    while (n--)
    {
        int score{0};
        string description;
      while (true)
        {
            getline(cin,description);
            if(description[0]=='.')
            {
                break;
                
            }

            string word="";
            for(int i{0};i<description.size();++i)
            {
                if(description[i]==' ')
                {
                    if(keys[word]>0)
                    {
                        score+=keys[word];
                    }
                  //  cout<<word<<"**\n";
                    word="";
                }
                else
                    word+=description[i];

            }
            if(word!="")
                if(keys[word]!=0)
                    score+=keys[word];

        }

        cout<<score<<"\n";
    }

    return 0;
}
