1class Solution {
2public:
3    int findUnsortedSubarray(vector<int>& nums) 
4    {
5        int l = -1,r = -1;
6        int maxSeen  = nums[0], minSeen = nums[nums.size()-1];
7        int length{0};
8        for(int i{1};i<nums.size();++i)
9        {
10            maxSeen = max(maxSeen,nums[i]);
11            if(nums[i] < maxSeen)
12            {
13                r = i;
14            }
15        }
16           
17             
18        for(int j = nums.size()-2 ; j>=0 ; --j)
19        {
20           minSeen = min(minSeen,nums[j]);
21           if(nums[j] > minSeen)
22           {
23            l =j;
24           }
25        }
26        
27
28            length = r-l+1;
29        return (l == -1) ? 0 : length;
30
31    }
32};