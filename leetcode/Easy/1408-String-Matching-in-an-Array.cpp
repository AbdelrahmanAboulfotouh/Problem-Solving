class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>ans;
        for(auto str:words)
            for(auto s:words)
            {
                if(s ==str )
                continue;
               if( str.find(s) !=  string::npos)
                ans.insert(s);

            }
        
        return {ans.begin(),ans.end()};
        
    }
};