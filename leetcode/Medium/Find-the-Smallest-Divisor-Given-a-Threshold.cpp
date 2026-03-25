1class Solution {
2public:
3int cumDiv(vector<int>&nums,int div)
4{
5    int sum {0};
6    for(auto & n : nums)
7    {
8        sum+=(ceil(double(n)/double(div)));
9    }
10    return sum;
11}
12    int smallestDivisor(vector<int>& nums, int threshold) {
13        sort(nums.begin(),nums.end());
14        int sz = nums.size();
15        int l  = 1;int r =nums[sz-1];
16        int ans {1};
17        while(l<=r)
18        {
19            int mid  = l + (r-l)/2;
20            if(cumDiv(nums,mid) <= threshold)
21            {
22                ans = mid;
23                r = mid-1;
24            }
25            else
26                l = mid+1;
27        }
28
29        return ans;
30    }
31};