class Solution {
public:
    vector<int> minCosts(vector<int>& cost) 
    {
        int mn = INT_MAX;
        for(auto &x: cost)
        {
            x= min(mn,x);
            mn = x; 
        }
        return cost ;
        
    }
};