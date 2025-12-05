1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4        vector<int>perfixSum(nums.begin(),nums.end());
5        for(int i{1};i<perfixSum.size();++i)
6            perfixSum[i]+=perfixSum[i-1];
7        vector<int>suffixSum(nums.begin(),nums.end());
8        for(int i = suffixSum.size()-1;i>0 ; --i)
9        {
10            suffixSum[i-1]+=suffixSum[i];
11        }
12        int ans{0};
13        for(int i{0};i<perfixSum.size()-1;++i)
14        {
15            int diff = suffixSum[i+1] -  perfixSum [i];
16            if(diff % 2 == 0)
17                ++ans;
18        }
19
20        return ans;
21    }
22};