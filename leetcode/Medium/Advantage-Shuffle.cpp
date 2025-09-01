class Solution {
public:
   vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2)
    {
        multiset<int> aux (nums1.begin(),nums1.end());
        vector<int> ans (nums1.size());
        for(int i{0};i<nums2.size();++i)
        {
            auto  it = aux.upper_bound(nums2[i]);
            if(it != aux.end() )
            {

                ans[i] = *it;
                aux.erase(it);

            }
            else
              { ans[i] = *aux.begin();
               aux.erase(aux.begin());}

        }
       

        return ans;
    }
};