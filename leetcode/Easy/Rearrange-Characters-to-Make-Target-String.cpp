class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>fr;
        for(auto &c: s)
            fr[c]++;
        unordered_map<char,int>fr2;
        for(auto &c: target)
            fr2[c]++;

        int ans = 101;
        for(auto &c: target)
        {
            ans = min(ans,fr[c]/fr2[c]);
        }

        return ans;
    }
};