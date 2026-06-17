1class Solution {
2public:
3long long digitSum(int n){
4long long sum = 0;
5    while(n)
6    {
7        sum+=(n%10);
8        n/=10;
9    }
10    return sum;
11}
12long long squareSum(int n)
13{
14    long long sum = 0;
15
16     while(n)
17    {
18        int x = n%10;
19        sum+=(x*x);
20        n/=10;
21    }
22    return sum;
23}
24    bool checkGoodInteger(int n) {
25        return (squareSum(n) - digitSum(n) >=50);
26            
27    }
28};