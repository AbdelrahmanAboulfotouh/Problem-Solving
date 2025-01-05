class Solution {
public:
 int lengthOfLongestSubstring(string s)
{
    
    int ans {0};
    set<char>st;
    int l{0},r{0};
    while(r< s.size())
    {
        while(st.find(s[r]) != st.end())
            st.erase(s[l++]);
        ans=max(ans,r-l+1);
        st.insert(s[r++]);
    
    }
    return ans;
}

};