1class Solution {
2    public int[] sortedSquares(int[] nums) {
3      for(int i =0 ;i<nums.length;++i)
4      {
5        nums[i]*=nums[i];
6      }
7      Arrays.sort(nums);
8        return nums;
9    }
10}