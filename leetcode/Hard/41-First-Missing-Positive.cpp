class Solution {
public:

    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int,bool>seen;
       for(auto &num:nums)
       {
        if(num>0&&num <=n)
            seen[num] = true;
       }
       for(int i{1};i<=n;++i)
       {
        if(!seen[i])
        return i;
       }
       return n+1;
    }
};