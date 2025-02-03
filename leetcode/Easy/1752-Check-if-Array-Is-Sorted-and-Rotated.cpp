class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int n = nums.size();
        int Inversions = (int)(nums[0] < nums[n-1]);
        for(int i{1};i<n;++i)
        {
            if(nums[i] < nums[i-1])
                ++Inversions;
        }
    return  Inversions <=1 ;
    }
};