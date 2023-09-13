#include<iostream>
using namespace std;

int main() {
string str;
cin>>str;
int ans=0;
for(int i=0;i<str.size()/2;++i)
    if(str[i]!=str[str.size()-1-i])
        ++ans;
cout<<ans;
    return 0;
}
