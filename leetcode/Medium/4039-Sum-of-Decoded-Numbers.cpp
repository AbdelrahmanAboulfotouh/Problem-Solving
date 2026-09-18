class Solution {
public:
long long power(long long base, long long exp) {
    long long res = 1;
    long long MOD = 1e9 + 7; // 1,000,000,007
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
    int sumDecoded(vector<long long>& nums) {
        int ans{0};
        long long MOD = 1e9 + 7; 
        for(auto &n : nums)
       { 
            long long d = floor(n /10);
            int w = n%10;

            stack<int>st;
            while(d>0)
            {
                st.push(d%10);
                d/=10;
            }
            long long  x{0};
            while(w--)
            {
                x*=10;
                x+=st.top();
                st.pop();
            }
            long long y{0};
            while(!st.empty())
            {
                y*=10;
                y+=st.top();
                st.pop();


            }
        ans= (ans +power(x,y)) % MOD;
       }
        return ans; 
    }
};