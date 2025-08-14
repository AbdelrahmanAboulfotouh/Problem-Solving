class Solution {
public:
 long long maximumProduct(vector<int>& A, int m)
    {
        long long Ps = INT_MIN;
        long long Ns = INT_MAX;
        long long max_product = LLONG_MIN;

        for(int i = 0;i<A.size();++i)
        {
            if(i+1 >=m)
            {
                Ps = max(Ps, 1LL*A[i+1 - m ]);
                Ns = min(Ns, 1LL*A[i+1 - m]);
                max_product = max({max_product, (Ps*A[i]), (Ns*A[i])});


            }
        }
        return max_product;
    }
};