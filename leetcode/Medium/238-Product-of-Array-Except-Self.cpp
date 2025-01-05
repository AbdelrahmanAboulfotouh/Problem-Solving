class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>left=nums;
    vector<int>right =nums;
    vector<int>ans(nums.size());
    for(int i{1};i<nums.size();++i)
        right[i]= right[i-1]*nums[i];
    for(int i=nums.size()-2;i>=0;--i)
        left[i]= left[i+1] * nums[i];

    for(int i{0};i<nums.size();++i )
    {
        int x{1};
        if(i+1<nums.size())
            x*=left[i+1];
        if(i-1 >=0)
            x*=right[i-1];
        ans[i]=x;
    }

    return ans;
}
};