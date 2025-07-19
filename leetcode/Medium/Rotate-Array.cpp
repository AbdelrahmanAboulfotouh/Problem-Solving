class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;
            vector<int>aux(nums.begin(),nums.end());
            for(int i{0};i<aux.size();++i)
            {
                int new_idx = (i+k) % n;
                nums[new_idx] = aux[i];
            }
    }
};