1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        if(nums.size() <=2)
5            return nums;
6        vector<int> left(nums.begin(),nums.end());  left[0] = nums[0];
7        vector<int> right(nums.begin(),nums.end()); right[nums.size()-1] = nums[nums.size()-1];
8
9        for(int i{1};i<nums.size();++i)
10            left[i] = max(left[i-1],nums[i]);
11        
12        for(int i = nums.size()-2;i >=0;--i)
13            right[i] = max(right[i+1],nums[i]);
14        vector<int> ans;
15        ans.push_back(nums[0]);
16        for(int i{1};i<nums.size()-1;++i)
17        {
18            if ( (nums[i] > right[i+1]) or (nums[i] > left[i-1]) )
19                ans.push_back(nums[i]);
20
21        }
22        ans.push_back(nums[nums.size()-1]);
23        return ans;
24    }
25};