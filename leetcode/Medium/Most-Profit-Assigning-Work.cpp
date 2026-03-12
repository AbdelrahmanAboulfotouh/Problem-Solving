1class Solution {
2public:
3    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
4        int n = difficulty.size();int ans{0};
5        vector<pair<int,int>> jobsInfo;
6    for(int i = 0; i < n; i++)
7        jobsInfo.push_back({difficulty[i], profit[i]});
8            sort(jobsInfo.begin(),jobsInfo.end());
9        sort(worker.begin(),worker.end());
10        //The subsequent iteration over the workers and jobs is linear, O(n + m), since each job and worker is processed at most once.
11        int j{0};int maxP =0;
12        for(int &W : worker)
13        {
14            while(j < n && jobsInfo[j].first <= W )
15            {
16                maxP = max(maxP,jobsInfo[j].second);
17                ++j;
18            }
19            ans+=maxP;
20        }
21
22        return ans;
23
24        
25    }
26};