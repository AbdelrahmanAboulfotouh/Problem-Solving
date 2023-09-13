#include<iostream>
using namespace std;

int main(){

         long long  a,b,c;
         cin>>a>>b>>c;
         long long  prob1=a+b,prob2=a+c,prob3=b+c;
    if(a>=1&&a<=100&&b>=1&&b<=100&&c>=1&&c<=100)
    {


           if(prob1>=prob2&&prob1>=prob3)
           {
               cout<<prob1;
           }
           else if(prob2>=prob1&&prob2>=prob3)
           {
               cout<<prob2;
           }
           else if(prob3>=prob1&&prob3>=prob2)
           {
               cout<<prob3;
           }



    }
return 0;
}
