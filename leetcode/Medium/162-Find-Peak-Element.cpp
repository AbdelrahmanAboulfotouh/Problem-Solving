class Solution {
public:
bool predicate(vector<int>&v, int idx)
{
    return (v[idx] < v[idx+1]);

}
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int m = l + (r-l)/2;
            if(predicate(nums,m))
            {
                l =m+1;
            }
            else
            {
                r=m;
            }
        }
        
        return l;
        
    }
};