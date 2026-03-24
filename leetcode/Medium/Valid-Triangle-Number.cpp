1class Solution {
2public:
3    int triangleNumber(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int ans{0};
6        for(int i{0};i<nums.size();++i)
7        {
8            for(int j = i + 1 ;j<nums.size();++j)
9            {
10                int l = j +1 , r = nums.size()-1;
11                int last_valid_index  = j;
12                while(l <= r)
13                {
14                    int mid = l + (r-l)/2;
15                    if(nums[i] + nums[j] > nums[mid])
16                    {
17                        last_valid_index = mid;
18                        l = mid +1 ;
19                    }
20                    else
21                        r = mid  -1 ;
22                }
23                ans+=(last_valid_index - j);
24            }
25        }
26        return ans;
27    }
28};