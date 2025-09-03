class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        unordered_map<string, vector<string>>mp;
        sort(products.begin(),products.end());
        string sub;
        for(int i{0};i<searchWord.size();++i)
        {
             sub += searchWord[i];
            for(int j{0}, limit{0} ; limit < 3 and j<products.size();++j)
            {
                auto pos = products[j].rfind(sub,0);
                if(pos == 0)
                {
                    mp[sub].push_back(products[j]);
                    ++limit;
                }
            }
        }
        sub.clear();
         vector<vector<string>> ans;
        for(int i{0};i<searchWord.size();++i)
        {
             sub +=  searchWord[i];
            ans.push_back(mp[sub]);
        }

        return ans;
    }
};