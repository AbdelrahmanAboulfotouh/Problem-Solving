class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        for(int i{1};i<nums.size();++i)
            {
                nums[i]+=nums[i -1 ];
            }
            int ans =INT_MIN;
            int mn=0;
        for(int i{0};i<nums.size();++i)
            {
                ans=max({ans, nums[i],nums[i] - mn});
                mn=min(mn,nums[i]);
            }
            return ans;
    }
};