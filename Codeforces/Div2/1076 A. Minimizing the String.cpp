#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Abulfotouh     ios_base::sync_with_stdio(false),     cin.tie(NULL)
ll get_mod(ll &X,ll &Y)
{
    return ((X%Y)+Y)%Y;
}
int get_string_frequancy(string word, string& sentance)
{
    int M = word.length();
    int N = sentance.length();
    int res = 0;


    for (int i = 0; i <= N - M; i++)
    {


        int j;
        for (j = 0; j < M; j++)
            if (sentance[i + j] != word[j])
                break;


        if (j == M) {
            res++;
        }
    }
    return res;
}
bool asending(pair<int,int> &p1,pair<int,int> &p2)
{
    if(p1.first == p2.first)
    {
        return p1.second>p2.second;
    }
    return p1.first<p2.first;
}
void perfix_sum(vector<int> &v,vector<long long > &perfix,int size)
{
    for(int i{1};i<=size;++i)
    {
        perfix[i]=perfix[i-1]+v[i-1];
    }

}

string DecimalToBinary(int num)
{
    string str;
    while(num){
        if(num & 1) // 1
            str+='1';
        else // 0
            str+='0';
        num>>=1; // Right Shift by 1
    }
    return str;
}
void reverse(string str)
{
    for(int i=str.size()-1 ; i>=0 ; i--)
        cout<< str[i];
}

int main() {

    Abulfotouh;
    int n;cin>>n;
    string s;cin>>s;
    bool f = false;
    string ans;
    for(int i{0};i<n;++i)
    {
        if(s[i]>s[i+1] && !f)
        {
            f = true;
            continue;
        }
        ans+=s[i];
    }
    if(!f)
    {
        ans.pop_back();
        

    }
    
   cout<<ans;
           return 0;
}
