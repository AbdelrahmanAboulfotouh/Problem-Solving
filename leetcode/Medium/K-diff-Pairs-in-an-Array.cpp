class Solution {
public:
struct pair_hash {
    size_t operator()(const std::pair<int, int>& p) const {
        return std::hash<int>()(p.first) ^ (std::hash<int>()(p.second) << 1);
    }
};
    int findPairs(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        unordered_map<pair<int,int>,bool,pair_hash>visited;
        int pairs{0};
        for(int i{0};i<nums.size()-1;++i)
        {
            for(int j = i+1;j<nums.size();++j)
            {
                int difference = nums[j] - nums[i] ;
                if(difference > k)
                    break;
                else if(difference < k)
                    continue;

                pair<int,int>p = {nums[i],nums[j]};
                if(visited.find(p) == visited.end())
                {
                        ++pairs;
                        visited[p] = true;

                }
            }
        }
        return pairs;
    }
};