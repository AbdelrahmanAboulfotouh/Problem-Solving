class Solution {

public:
    int get_sum_of_num(int num)
    {
        int sum{0};
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums)
    {
        //maping numbers with it's original indices
        unordered_map<int,int>position;
        for(int i{0};i<nums.size();++i)
            position[nums[i]] = i;
        //storing umbers with it's digit summation
        vector<pair<int,int>>sums(nums.size());
        for(int i{0};i<nums.size();++i)
            sums[i] = {get_sum_of_num(nums[i]), nums[i]};

        sort(sums.begin(), sums.end());
        int swaps{0};
       for(int i{0};i<nums.size();++i)
       {
        // if they are not equal means there is a swap has hapoende so we need to count it
           if(nums[i] != sums[i].second)
           {
              //getting original index of swaped element to swap it with cuurent one in original array
               int idx = position[sums[i].second];
               //doing manual swap
               swap(nums[i],nums[idx]);

               //maintaing map of indices 
               position[nums[i]] = i;
               position[nums[idx]]=idx;
               
                //counting swaps 
               ++swaps;
           }
       }
        return swaps;
    }
};
