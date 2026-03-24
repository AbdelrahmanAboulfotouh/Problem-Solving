1class Solution {
2public:
3    vector<int> findRightInterval(vector<vector<int>>& intervals) {
4          vector<int> sorted_intervals;
5          unordered_map<int,int>idx;
6          vector<int>ans;
7
8        for(int i{0};i<(int)intervals.size();++i)
9        {
10            int Si = intervals[i][0];
11            sorted_intervals.push_back(Si);
12            idx[Si] = i;
13        }
14        sort(sorted_intervals.begin(),sorted_intervals.end());
15
16        for(auto &sub :intervals )
17        {
18            int Ei = sub[1];
19            //binary search on sorted_intervals
20            auto it = lower_bound(sorted_intervals.begin(),sorted_intervals.end(),Ei);
21            if(it != sorted_intervals.end())
22            {
23                int Si = sorted_intervals[(int)(it - sorted_intervals.begin())];
24                 ans.push_back(idx[Si]);
25            }
26            else
27                ans.push_back(-1);
28
29
30        }
31        return ans;
32    }
33};