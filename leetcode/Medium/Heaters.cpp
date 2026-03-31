1class Solution {
2public:
3    int findRadius(vector<int>& houses, vector<int>& heaters) {
4        vector<int>minDist(houses.size());
5        sort(heaters.begin(),heaters.end());
6        int ans{0};
7
8        for(int i{0};i<houses.size();++i)
9        {
10            int idx = lower_bound(heaters.begin(),heaters.end(),houses[i]) - heaters.begin();
11            if(idx == heaters.size())
12            {
13                     ans = max(ans,abs(heaters[idx-1] - houses[i]));
14            }
15            else if(idx == 0)
16            {
17                ans = max(ans,abs(heaters[idx] - houses[i]));
18
19            }
20            else
21            {
22                int Min = min(abs(heaters[idx] - houses[i]), abs(heaters[idx-1] - houses[i]));
23                ans = max(ans,Min);
24            }
25
26           
27        }
28
29        
30        return ans;
31    }
32};