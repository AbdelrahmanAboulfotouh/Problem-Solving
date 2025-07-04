class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto &c:nums)
        {
            pq.push(c);
        }
        while(--k)
        pq.pop();
        return pq.top();
    }
};