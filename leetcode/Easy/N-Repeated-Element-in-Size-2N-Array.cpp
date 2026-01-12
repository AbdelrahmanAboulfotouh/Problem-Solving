1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4     int  n = nums.size() / 2 ;
5     unordered_map<int,int>fr;
6     for(auto x : nums)
7        fr[x]++;
8        for(auto element : fr )
9        {
10            int x = element.second;
11            if(x == n)
12             return element.first;
13        }
14        return -1;
15    }
16};