class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums)
    {
       int sub_inc{},sub_dec{};
       int c_inc{1},c_dec{1};
       for(int i{1};i<nums.size();++i)
       {
            if(nums[i-1] < nums[i] )
                ++c_inc;
            else
            {
                sub_inc = max(sub_inc,c_inc);
                c_inc = 1;
            }
            if(nums[i-1] > nums[i])
                ++c_dec;
            else
            {
                sub_dec = max(sub_dec,c_dec);
                c_dec =1 ;
            }

       }
                       sub_inc = max(sub_inc,c_inc);
                    sub_dec = max(sub_dec,c_dec);

        return max(sub_inc,sub_dec);
    }
};