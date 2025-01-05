class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        
        int n = arr.size(),ans{0};
        if(n == 0)
             return 0;
        vector<int>perfix(n+1);
        for(int i{1};i<n+1;++i)
            perfix[i] = perfix[i-1] + arr[i-1];
        int l{1},r{k};
        while(r<n+1)
        {
            if((perfix[r] - perfix[l-1]) / k >=threshold )
                ++ans;
            ++l,++r;
        }
        return ans;
    }
};