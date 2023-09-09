#include<bits/stdc++.h>
using namespace std;
int main() {
  string name ;
  cin>>name;
  string alpha="abcdefghijklmnopqrstuvwxyz";
  int counter[26]{0};
  int ans{0};

  for(int i{0};i<(int)name.size();++i) {
    for(int j{0};j<26;++j)
        if(name[i]==alpha[j])
            ++counter[j];
  }

    for(int j{0};j<26;++j)
        if(counter[j]>=1)
            ++ans;
    
    if(ans%2==0)
    cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
