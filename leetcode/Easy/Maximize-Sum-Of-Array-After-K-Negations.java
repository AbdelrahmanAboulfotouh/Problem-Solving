1class Solution {
2    public int largestSumAfterKNegations(int[] nums, int k) {
3        Arrays.sort(nums);
4        int  mn = Integer.MAX_VALUE;
5        int sum = 0;
6        for(int i = 0 ; i < nums.length;++i)
7        {
8            if(nums[i] < 0 && k > 0)
9            {
10                nums[i]*=-1;
11                --k;
12            }
13            sum+=nums[i];
14            mn = Math.min(mn,nums[i]);
15        }
16        if(k % 2 != 0)
17            sum-=(2*mn);
18        return sum;
19        
20        
21    }
22}