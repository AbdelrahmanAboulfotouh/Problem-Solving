class Solution {
public:
         vector<int> topKFrequent(vector<int>& nums, int k)
    {
            unordered_map<int,int>fr;
            for(auto &i:nums)
                ++fr[i];
            priority_queue<pair<int,int>>pr;
            for(auto &p:fr)
                pr.push({p.second,p.first});
            vector<int>ans;
            ans.reserve(k);
            while (k--)
            {
                ans.push_back(pr.top().second);
                pr.pop();
            }
        return ans;

    }



};