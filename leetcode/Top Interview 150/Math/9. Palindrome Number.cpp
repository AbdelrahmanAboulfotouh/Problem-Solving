class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        long long  reversed{0};
        while(x>0)
        {
            reversed = (reversed * 10 ) + (x % 10) ;
            x/=10;
        }
      
        return copy == reversed;
        
    }
};
