1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        auto it = lower_bound(nums.begin(),nums.end(),target);
5        if(it != nums.end() and *it == target)
6            return it - nums.begin();
7
8        return -1;
9        
10    }
11};