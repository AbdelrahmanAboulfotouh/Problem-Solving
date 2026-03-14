1class Solution {
2public:
3    int reductionOperations(vector<int>& nums) {
4        unordered_set<int>st;
5        unordered_map<int,int>fr;
6        vector<int>unique;
7        for(auto &x :nums)
8            fr[x]++;
9        for(auto &[key,val] : fr)
10            unique.push_back(key);
11        
12        sort(unique.rbegin(),unique.rend());
13        int ans{0};int n = unique.size();
14        for(int i{0};i<n;++i)
15        {
16            ans+=(fr[unique[i]]* (n-i-1));
17        }
18        return ans;
19    }
20};