class Solution {
public:
    bool is_overlap(const pair<int,int> &p1, const pair<int,int> &p2)
    {
        if( (p1.first >= p2.first and p1.first <= p2.second) or (p2.first >= p1.first and p2.first <= p1.second) )
            return true;

        return false;
    }
    bool custom_sort(const vector<int> &v1, vector<int> &v2)
    {
        return v1[0] <= v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i{1};i<intervals.size();++i)
        {
            auto interval = intervals[i];
            pair<int,int> p1 = {start, end};
            pair<int,int> p2 = {interval[0],interval[1]};
            if(is_overlap(p1,p2) == false)
            {
                ans.push_back({start,end});
                start = interval[0];
                end = interval[1];
            }
            else
            {
                start = min(start,interval[0]);
                end   = max(end,interval[1]);
            }

        }
         ans.push_back({start,end});

        return ans;

        
    }
};