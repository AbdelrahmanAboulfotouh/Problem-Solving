1class Solution {
2public:
3    int minimumSwaps(vector<int>& nums) {
4        vector<bool>fr(100+1);
5        int sz = nums.size();
6        int num_of_zeros{0};
7        for(int i{0};i<sz;++i)
8        {
9            if(nums[i] == 0)
10                {
11                    fr[i] = true;
12                    ++num_of_zeros;
13                }
14
15        }
16        int limit =(sz-num_of_zeros);
17        for(int i = sz-1;i>= limit; i--)
18        {
19            if(fr[i] == true)
20            --num_of_zeros;
21        }
22
23        return num_of_zeros;
24    }
25};