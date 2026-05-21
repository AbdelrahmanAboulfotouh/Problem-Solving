1class Solution {
2public:
3    int arraySign(vector<int>& nums) {
4        int  product =1;
5        for(auto &n :nums)
6        {
7            if(n == 0 )
8                return 0;
9            if(n < 0)
10                product*=-1;
11            
12        }
13        return (product < 1)? -1 : 1;
14    }
15};