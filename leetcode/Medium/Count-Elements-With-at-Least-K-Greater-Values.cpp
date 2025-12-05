1class Solution {
2public:
3    int countElements(vector<int>& nums, int k) {
4        if(k == 0)
5            return nums.size();
6
7        map<int, int> freq;
8        for (int x : nums)
9            freq[x]++;
10
11       
12        int i = 0;
13        int ans = 0;
14        int total = nums.size();
15        for(auto & It : freq)
16        {
17            int curf = It.second;
18            total-= curf;
19            if(total >= k )
20                ans+=curf;
21        }
22
23        return ans;
24    }
25};
26