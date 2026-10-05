class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool pos_f = false;
        bool neg_f = false;
    for(int i{0};i<nums.size()-1;++i)
    {
        if(nums[i] - nums[i+1] < 0)
            neg_f = true; 
        else if (nums[i] - nums[i+1] > 0)
        pos_f = true;
    }
        return !(pos_f && neg_f);

        
    }
};