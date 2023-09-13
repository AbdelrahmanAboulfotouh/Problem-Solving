#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int ans{0};
   for(int i{1};i<=n;++i)
   {
       string str =to_string(i);
       if(str.size()%2!=0)
           ++ans;
   }
   cout<<ans;
       return 0;
}
