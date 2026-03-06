1class Solution {
2public:
3    int eliminateMaximum(vector<int>& dist, vector<int>& speed) 
4    {
5        vector<int>time(dist.size());
6        for(int i{0};i<dist.size();++i)
7        {
8            time[i] = ceil((double)dist[i] / (double)speed[i]);
9        }
10        sort(time.begin(),time.end());
11        int ans{1};
12        for(int i{1};i<time.size();++i)
13        {
14            time[i]-=i;
15            if(time[i] > 0)
16                ++ans;
17            else
18                break;
19        }
20        return ans;
21        
22    }
23};