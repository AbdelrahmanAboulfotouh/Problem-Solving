class Solution {
public:
   int maxFrequency(vector<int>& nums, int k)
    {
        sort(nums.begin(),  nums.end());
       int  n = nums.size() ,ans{1};
        long long total{0};
       int l{0},r{0};
       while(r<n)
       {
        total+=nums[r];

        while((long long)(r-l+1) * nums[r] > total + k )
            total-=nums[l++];
        
        ans = max(ans,r-l+1);
        ++r;
       }
        return ans;
    }

};