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
    string in,trans;
    int x{0};
    map<string,string>dic;
    while (x!=2)
    {
        getline(cin,in);
        if(in.empty())
        {
            ++x;
            continue;
        }

        if(x==0)
        {
            bool f=0;
            string temp="";
            trans="";
            for(int i{0};i<in.size();++i)
            {
                if(in[i]==' ')
                {
                    f=1;
                    continue;
                }
                else if(f==0)
                {
                    temp+=in[i];
                }
                else if(f)
                {
                    trans+=in[i];
                }
            }
            dic[trans]=temp;

        }

        if(x==2)
            break;
        if(x==1)
        {
            if (dic[in].empty())
                cout<<"eh\n";
            else
                cout<<dic[in]<<"\n";
        }


    }
    return 0;
}
