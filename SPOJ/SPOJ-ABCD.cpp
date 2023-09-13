#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    char last ='Z';
        for(int i{0};i<2*n;i+=2)
            {
            int t=2;

            while(t--)
                {
                for(int j='A';j<='D';++j)
                    {
                    if(str[i]!=j&&str[i+1]!=j&&last!=j)
                    {
                        cout<<(char)j;
                        last=j;
                        break;
                    }
                    }

                }
            }
}
