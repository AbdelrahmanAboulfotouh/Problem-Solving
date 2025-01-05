class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l{0},r = numbers.size()-1;
         int sum = numbers[l] + numbers[r];
        while(l < r)
        {
             sum = numbers[l] + numbers[r];

            if( sum == target)
                break;
            else
            {
                if (sum < target)
                    ++l;
                else
                    --r;
            }
                
            

        }
    return{l+1,r+1};
    }
};