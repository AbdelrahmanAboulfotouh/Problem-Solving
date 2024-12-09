class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c{1};
        for(int i=digits.size()-1; i>=0;--i)
        {
            digits[i]+=c;
            c = (digits[i] % 10 == 0) ;
            if(c == 1)
                digits[i]=0;
             else
               break;
        }
        if(c)
             digits.insert(digits.begin(),1);
       
    return digits ;
    }
};
