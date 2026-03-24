1class Solution {
2public:
3bool is_valid(int n,long long mid)
4{
5    return mid*(mid+1)/2 <= n ;
6}
7    int arrangeCoins(int n) {
8        int ans{0};
9        int l = 0 , r = n ;
10        while(l<=r)
11        {
12            int mid  = l + (r-l)/2;
13            if(is_valid(n,mid))
14            {
15                ans = mid;
16                l = mid+1;
17            }
18            else
19                r = mid - 1;
20        }
21        return ans;
22    }
23};