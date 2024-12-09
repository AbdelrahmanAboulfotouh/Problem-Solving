class Solution {
public:
    int mySqrt(int x) 
    {
        int l{0},r=x/2+1,ans{0};
        long long  m{1};
        long long power{1};

        while(l<=r)
        {
            m = l+(r-l)/2;
            power = m*m;
            if(power <= x)
            {
                ans = m;
                l=m+1;
            }
            else 
                r=m-1;
            
        
        }
        return ans;
    }
};
