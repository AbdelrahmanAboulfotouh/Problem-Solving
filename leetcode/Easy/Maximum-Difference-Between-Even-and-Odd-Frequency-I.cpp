class Solution {
public:
    int maxDifference(string s) {
        sort(s.begin(),s.end());
        vector<int>odd;
        vector<int>even;
        int x{1};
        for(int i{0};i<s.size()-1;++i)
        {
            if(s[i] != s[i+1])
            {
                if(x %2 ==0)
                    even.push_back(x);
                else
                    odd.push_back(x);
                x = 0;
            }
            ++x;
        }
        if(x %2 ==0)
                    even.push_back(x);
                else
                    odd.push_back(x);
        int ans =INT_MIN;
        for(int i{0};i<even.size();++i)
        {
            for(int j{0}; j<odd.size();++j)
            {
                ans = max(ans,odd[j] - even[i]);
            }
        }
        return ans;
    }
};