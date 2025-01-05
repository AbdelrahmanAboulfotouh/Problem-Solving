class Solution {
public:
//o(N) N = v.size()
vector< long long>prefix_sum(vector<int>v)
{
    vector< long long >prefix(v.size()+1);
    for(int i{1};i<prefix.size();++i)
    {
        prefix[i]=v[i-1]+prefix[i-1];
    }
    return prefix;
}

    int waysToSplitArray(vector<int>& nums) {
        vector<long long>perfix = prefix_sum(nums);
        int n = nums.size(),ans{};
        for(int i{0};i<n-1;++i)
        {
            long long left_sum = perfix[i+1];
            long long right_sum = perfix[n] - left_sum;
            ans+=(left_sum >= right_sum ? 1:0);
        }

        return ans;
        
    }
};