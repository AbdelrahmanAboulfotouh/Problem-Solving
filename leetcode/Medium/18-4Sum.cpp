class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
     {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i{0};i<nums.size();++i)
        {
            if(i > 0 and nums[i] == nums[i-1])
                continue;

            for(int j = i+1;j<nums.size();++j)
            {
                    if(j >( i+1) and nums[j] == nums[j-1])
                        continue;
                int l = j+1,r=nums.size()-1;
                while(l < r)
                {
                     long sum = ( long )nums[i] + ( long )nums[j] + ( long )nums[l] + ( long)nums[r];
                    if(sum == target )
                        {
                            ans.push_back(vector<int>{nums[i], nums[j], nums[l], nums[r]});
                                ++l;
                            while(l < r and nums[l] == nums[l-1])
                                ++l;
                        }
                        else if(sum > target )
                            --r;
                            else
                            ++l;
                }
            }

        }
    return ans;
    }
};