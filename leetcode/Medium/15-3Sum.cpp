class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums)
{
    
    set<vector<int>>remo;
    sort(nums.begin(),nums.end());
    for(int i{0};i<nums.size()-2;++i)
    {
        
        int l = i+1 , r = nums.size()-1;
        while(l<r)
        {
            int sum = nums[i] + nums[l] + nums [r] ;
            if(sum == 0)
            {
                remo.insert({nums[l],nums[r],nums[i]});
                if(nums[l] + nums[r] >0)
                    --r;
                else
                ++l;
            }
            else
            {
                if(sum > 0)
                    --r;
                else
                    ++l;
            }
        }

    }
    vector<vector<int>>v(remo.begin(),remo.end());
    return v;
}
};