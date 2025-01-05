class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        
     int l{0},r=nums.size()-(nums.size() > 1),m;

     while(l<=r)
     {
         m = l+(r-l)/2;
        bool f=true;
        f=(m-1 >=0 and nums[m]>nums[m-1])?false:f;
        f=(m+1<nums.size() and nums[m] > nums[m+1])?        false:f;
        if(f)
        return nums[m];
        if(nums[m] > nums[r])
            l=m+1;
            else
            r=m-1;

     }  
        return nums[0];
    }
};