class Solution {
public:
    int claculate_sum (int num,int sum = 0)
    {
        if(num == 0)
            return sum;
          int least = (num%10);
          int ans =   claculate_sum(num/10,sum + least);
      
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i{0};i<nums.size();++i)
        {
            int sum = claculate_sum(nums[i]);
            if(sum == i)
                return i;
        }
        return -1;
    }
};