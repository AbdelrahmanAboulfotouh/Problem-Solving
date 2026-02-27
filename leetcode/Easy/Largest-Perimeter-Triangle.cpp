1class Solution {
2public:
3bool  triangleNonzeroArea(int a,int b, int c)
4{
5    return ((a+b > c) and (a+c > b) and (b+c >a));
6}
7    int largestPerimeter(vector<int>& nums)
8     {
9        sort(nums.rbegin(),nums.rend());
10       for(int i{0};i<nums.size()-2;++i)
11       {
12        if(triangleNonzeroArea(nums[i],nums[i+1],nums[i+2]))
13        return nums[i]+nums[i+1]+nums[i+2];
14       }
15       return 0;
16    }
17};