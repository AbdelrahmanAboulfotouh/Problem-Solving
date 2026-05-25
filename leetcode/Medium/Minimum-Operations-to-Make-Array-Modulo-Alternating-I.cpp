1class Solution {
2public:
3int distance(int r, int t, int k)
4{
5    int diff = abs(r-t);
6    return min(diff,k-diff);
7}
8    int minOperations(vector<int>& nums, int k) {
9       
10        int ans =INT_MAX;
11        for(int x =0; x<k;++x)
12        {
13            for(int y = 0 ; y<k ; ++y)
14            {
15                if(x == y)
16                    continue;
17                int cost {0};
18                bool toggle = true;
19
20                for(int i = 0 ; i<nums.size();++i)
21                        {
22                            int mod_ = nums[i] % k ;
23                            if(toggle)
24                            {
25                                cost+= distance(mod_,x,k);
26
27                                toggle  = !toggle;
28                            }
29                            else
30                            {
31                                cost += distance(mod_,y,k);
32                                toggle = !toggle;
33                            }
34
35                        }
36                            ans = min(ans,cost);
37
38            }
39        }
40       
41        return ans;
42        
43    }
44};