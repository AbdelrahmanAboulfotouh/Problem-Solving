//https://codeforces.com/contest/1896/problem/B
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#define lop(n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{

int t; cin>>t;
while(t--)
{
    int n; cin>>n;
    string s; cin>>s;
   int index_a{-1},index_b{-1};
   bool A=false,B=false;
   for(int i{0},j=n-1;i<n;++i,--j)
    {
        if(s[i]=='A'&&!A)
        {
            index_a=i;
            A=true;
        }
         if(s[j]=='B'&&!B)
        {
            index_b=j;
            B=true;
        }
        if(A&&B)
            break;

    }

    if(index_a<index_b&&index_a>=0&&index_b>=0)
        cout<<(index_b-index_a);
    else
        cout<<'0';

cout<<'\n';



}


	return 0;
}
