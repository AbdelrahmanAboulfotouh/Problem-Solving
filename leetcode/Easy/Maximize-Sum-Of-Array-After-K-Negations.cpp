1class Solution {
2public:
3    int largestSumAfterKNegations(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5        for(int &num : nums)
6        {
7            if(num < 0 && k)
8            {
9                num = -num;
10                --k;
11            }
12        }
13        sort(nums.begin(),nums.end());
14        int sum{0};
15                for(int &num : nums)
16                {
17                    sum+=num;
18                }
19            
20                if(k && k % 2 != 0)
21                    sum-=(2*nums[0]);
22
23            return sum; 
24
25
26    }
27};