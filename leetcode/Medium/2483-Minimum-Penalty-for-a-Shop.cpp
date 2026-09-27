class Solution {
public:
    int bestClosingTime(string customers) {
        int sz =customers.size();
        vector<int>ns;
        int nCounter{0};
        vector<int>ys(sz);
        int yCounter{0};
        for(auto &c :customers )
        {
            ns.push_back(nCounter);
            if(c=='N')
                ++nCounter;
        }
        for(int i= customers.size()-1;i>=0;--i)
        {
            if(customers[i]=='Y')
                ++yCounter;
            ys[i]= yCounter;  
        }

        int ans{0};
        int lastPen=INT_MAX;
        for(int i{0};i<customers.size();++i)
        {
            int penality = ns[i] + ys[i];
            if(penality < lastPen)
            {
                lastPen = penality;
                ans = i;
            }

        }
        if(ns.back() < lastPen)
            ans = sz;
        
        return ans;
        
    }
};