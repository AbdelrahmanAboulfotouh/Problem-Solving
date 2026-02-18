1class Solution {
2public:
3vector<int> calc_ans(vector<int>&nums1, vector<int>& nums2)
4{
5    vector<int> ans ;
6     sort(nums1.begin(),nums1.end());
7     sort(nums2.begin(),nums2.end());
8    int sz2 = nums2.size();
9    int i{0};
10    int j{0};
11    while(j < nums2.size() && i < nums1.size())
12    {
13        if(nums1[i] == nums2[j])
14            {
15                ans.push_back(nums1[i]);
16                ++i,++j;
17                continue;
18            }
19        if(nums1[i] > nums2[j])
20            ++j;
21        else
22            ++i;
23        
24    }
25    return ans;
26
27}
28    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
29    {
30       
31         vector<int> ans; 
32        if(nums1.size() >= nums2.size())
33           ans = calc_ans(nums1,nums2);
34        else
35           ans = calc_ans(nums2,nums1);
36        
37        return ans;
38
39    }
40};