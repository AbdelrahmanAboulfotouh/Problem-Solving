class Solution {
public:
struct pair_hash {
    size_t operator()(const std::pair<int, int>& p) const {
        return std::hash<int>()(p.first) ^ (std::hash<int>()(p.second) << 1);
    }
};
pair<bool,pair<int,int>> check(vector<int> p1 ,vector<int>p2)
{
    if ( (p2[0] <= p1[0]) and (p1[1] <= p2[1]) ) 
        return{true,{-1,-1}};
    else
        return {false,{p1[0],p1[1]}};
}
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        int ans {0};
        pair<int,int>pre = {-1, -1};
        for(int i{0};i<intervals.size();++i)
        {
            auto cur = intervals[i];
            if(cur[0] > pre.first and cur[1] > pre.second)
                {
                    ++ans; 
                    pre.first = cur[0] ;
                }
                pre.second = max(pre.second, cur[1]);
        }
        return ans;
    }
};