#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
   string num;
   string zeros="0000000000";
   cin>>num;
   int sz=num.size();
   int n=stoi(num);

   if(n<=999)
   {
        cout<<num;
       return 0;
   }


    string ans=num.substr(0,3)+zeros.substr(0,sz-3);

        cout<<ans;






return 0;
}
