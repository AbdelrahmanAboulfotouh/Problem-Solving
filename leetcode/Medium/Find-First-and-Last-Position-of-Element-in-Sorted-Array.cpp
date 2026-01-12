1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        auto s=lower_bound(nums.begin(), nums.end(), target);
5        auto e=upper_bound(nums.begin(), nums.end(), target);
6
7        if(s == e)
8            return {-1,-1};
9    
10    return {(int)(s-nums.begin()),(int) (e-nums.begin()-1)};
11
12    }
13};