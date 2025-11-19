class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ans{0};
        for(int i{0};i<nums.size()-2;++i)
        {
            int first = nums[i];
            int middle = nums[i+1];
            int last = nums[i+2];
            if((first + last ) *2  == middle)
                ++ans;

        }
        return ans ;
    }
};