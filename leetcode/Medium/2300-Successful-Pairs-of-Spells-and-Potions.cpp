class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)
     {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(auto &i:spells)
        {
            int l{0},r=potions.size()-1;
            int x=potions.size();
            while(l<=r)
            {
                int mid = l + (r-l)/2;
            if (potions[mid] != 0 && i >= (success + potions[mid] - 1) / potions[mid])

                    {
                        x= min(x,mid);
                        r=mid-1;
                    }
                    else
                    {
                        l=mid+1;
                    }
            }
            ans.push_back(potions.size() - x);
        }
        return ans;
    }
};