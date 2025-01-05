class Solution {
public:
bool valid(vector<int>&piles,int k , long long h)
    {
        long long  hours{0};
        for(auto &i:piles)
            hours+=( i/k)+ (i%k !=0);

        return hours <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h)
     {
        int ans{0};
        int l=1;
        int r=1e9+1;
        while(l<=r)
        {
            int m= l+(r-l)/2;
            if(valid(piles,m,h))
            {
                ans=m;
                r=m-1;
            }
            else
            l=m+1;
        }
        return ans;

        
     }
};