1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int c{1};
5        for(int i=digits.size()-1; i>=0;--i)
6        {
7            digits[i]+=c;
8            c = (digits[i] % 10 == 0) ;
9            if(c == 1)
10                digits[i]=0;
11             else
12               break;
13        }
14        if(c)
15             digits.insert(digits.begin(),1);
16       
17    return digits ;
18    }
19};