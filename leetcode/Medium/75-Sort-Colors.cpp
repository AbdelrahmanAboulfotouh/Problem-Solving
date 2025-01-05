class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
            int idx{0};
            map<int,int>mp;
            for(auto &i:nums)
                mp[i]++;
            for(int i{0};i<3;++i)
            {
                     while(mp[i]--)
                        {
                            nums[idx++]=i;
                        }
                    
            }
           

    }
};