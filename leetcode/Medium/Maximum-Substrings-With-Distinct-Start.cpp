1class Solution {
2public:
3    int maxDistinct(string s) {
4        unordered_set<char> st;
5        for(auto &c:s)
6           { st.insert(c);}
7        return st.size();
8    }
9};