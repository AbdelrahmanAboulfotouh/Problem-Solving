1class Solution {
2public:
3int numOfbouquets(vector<int>& bloomDay,int day, int k)
4{
5    int count {0};
6    int bouquets{0};
7    for(int i{0};i<bloomDay.size();++i)
8    {
9        if(bloomDay[i]<= day)
10            ++count;
11        else
12            count = 0;
13
14         if(count >= k)
15        {
16            ++bouquets;
17            count = 0;
18        }
19    }
20   
21    return bouquets;
22}
23    int minDays(vector<int>& bloomDay, int m, int k) {
24        int n = bloomDay.size();
25       
26        int l  = INT_MAX , r = 0;
27        for(auto & d : bloomDay)
28        {
29             l = min(l,d);
30             r = max(r,d);
31        }
32        int ans{-1};
33        while(l<=r)
34        {
35            int mid  = l  + (r-l)/2;
36            int bouquest = numOfbouquets(bloomDay,mid,k);
37            if(bouquest >= m)
38            {
39                ans = mid;
40                r = mid-1;
41            }
42            else
43                l = mid+1;
44        }
45        
46        return ans;
47    }
48};