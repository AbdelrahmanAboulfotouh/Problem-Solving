#include<iostream>
using namespace std;

int main(){
   string num;
   cin>>num;
   int x=num[0]-'0'-1;
   int y=x+1;
   for(int i{1};i<num.size();++i)
    {
        x+=9;
        y+=num[i]-'0';

            }

        cout<<max(x,y);


return 0;
}
