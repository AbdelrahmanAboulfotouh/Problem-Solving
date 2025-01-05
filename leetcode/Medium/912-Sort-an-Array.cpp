class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
{
    map<int,int>mp;
    for(auto &i:nums)
        mp[i]++;
    int idx{0};
    for(auto &i:mp)
    {

            while(i.second--)
                nums[idx++]=i.first;
    }
    return nums;
}
};