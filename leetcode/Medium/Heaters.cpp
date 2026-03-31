1class Solution 
2{
3public:
4bool isValid(vector<int>& houses, vector<int>& heaters, int raduis)
5{
6    int covered{0};int idx{0};
7    int Hsz = houses.size();
8    for(auto &h : heaters)
9    {
10        int left = h - raduis;
11        int right = h + raduis;
12        while(idx < Hsz && left <=houses[idx] && right>=houses[idx])
13        {
14            ++idx;
15            ++covered;
16        }
17    }
18    return (covered == Hsz);
19}
20    int findRadius(vector<int>& houses, vector<int>& heaters) 
21    {
22       sort(houses.begin(),houses.end());
23       sort(heaters.begin(),heaters.end());
24       int ans{0};
25       int l = 0 ; 
26       int r = max(houses[houses.size()-1], heaters[heaters.size()-1]);
27       while(l<=r)
28       {
29            int radius = l + (r-l)/2;
30            if(isValid(houses,heaters,radius))
31            {
32                ans = radius;
33                r = radius-1;
34            }
35            else
36             l = radius+1;
37
38       }
39       return ans;
40    }
41};