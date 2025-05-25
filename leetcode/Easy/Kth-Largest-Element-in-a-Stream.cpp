class KthLargest {
    priority_queue<int>P;
    int k;
    int size;
public:
    KthLargest(int k, vector<int>& nums) {
    this->k = k ;
    for(auto &x:nums)
    {
        P.push(-x);
    }
     size = nums.size();
   while(size >k)
   {
    P.pop();
    --size;
   }
    }
    
    int add(int val) {
       if(size < k )
            P.push(-val);
       else if(val > -P.top())
        {
            P.pop();
            P.push(-val);
            
        }
        ++size;
       return -P.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */