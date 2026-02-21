1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
4    {
5        vector<vector<int>>ans;
6        sort(arr.begin(),arr.end());
7        int mn = INT_MAX;
8        for(int i=0,j=1;i<arr.size()-1;++j,++i)
9        {
10            mn= min(mn,abs(arr[j] - arr[i]));
11        }
12                for(int i=0,j=1;i<arr.size()-1;++j,++i)
13                    {
14                        if(abs(arr[j] - arr[i]) == mn)
15                        {
16                            ans.push_back({arr[i],arr[j]});
17                        }
18                    }
19
20        return ans;
21
22
23    }
24};