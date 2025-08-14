class Solution {
public:

    int findPairs(vector<int>& nums, int k) 
    {
        int pairs{0};
        unordered_map<int,int>fr;
        for(int i{0};i<nums.size();++i)
            ++fr[nums[i]];
        for( auto &item : fr)
        {
            if(k > 0)
            {
                if(fr.find((item.first + k)) != fr.end())
                    ++pairs;
            }
            else if(k == 0)
            {
                if(item.second > 1)
                    ++pairs;
            }
        }
        return pairs;
    }
};