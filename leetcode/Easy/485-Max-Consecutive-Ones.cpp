class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ans = nums[0];
        int cons = nums[0];
        for(int i {0};i<nums.size()-1;++i)
        {
            bool diff = (nums[i] == nums[i+1] && nums[i] == 1);
            if(diff )
                ++cons;
            else
            {
                max_ans = max(max_ans,cons);
                cons = nums[i+1];
            }
            if(i == nums.size() -2 )
                max_ans = max(max_ans,cons);


        }
        return max_ans; 
        
    }
};