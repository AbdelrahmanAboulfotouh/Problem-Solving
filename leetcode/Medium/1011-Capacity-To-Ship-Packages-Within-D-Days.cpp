class Solution {
public:
bool predicate(vector<int>&w,int & days, int mx)
{
    int c{0},d{0};
    for(int i{0};i<w.size();++i)
        if(c + w[i] > mx)
        {
            ++d;
            c=w[i];
        }
        else if (c + w[i] <=mx)
            c+=w[i];
        
    
    
    return (d + 1 <= days);
}
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int l = INT_MIN,r{0};
        for(auto &i:weights)
        {
            r+=i;
            l =max(l,i); 
        }
        int ans = INT_MAX;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(predicate(weights,days, mid))
            {
                ans = min(ans,mid);
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};