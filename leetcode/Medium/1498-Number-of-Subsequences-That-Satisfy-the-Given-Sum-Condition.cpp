const int MOD = 1e9 +7;
class Solution {

public:
    int numSubseq(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int ans{0},l{0},n = nums.size(),r = n-1;
        vector<int>PS(n);
        PS[0]=1;
        for(int i{1};i<n;++i)
            PS[i] = (PS[i-1]*2) % MOD;

        while(l<=r)
        {
            if(nums[l] + nums[r] <= target)
            {
                ans+=PS[r-l];
                ans%=MOD;
                ++l;
            }
            else
                --r;
        }




            
            return ans ;





    }
};