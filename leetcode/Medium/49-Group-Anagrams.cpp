class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string> strs)
    {
        map<string,vector<string>>mp;
        for(int i{0};i<strs.size();++i)
        {
            string s= strs[i];
            sort(s.begin(),s.end());
                mp[s].push_back(strs[i]);
            
        }
        vector<vector<string> > ans(mp.size());
        int x{0};
        for(auto &i:mp)
        {
            ans[x++] = i.second;
        }
        return ans;
    }
};