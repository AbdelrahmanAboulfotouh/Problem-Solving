class Solution {
public:
    int maxVowels(string s, int k)
     {

       vector<char>vowels = {'a','e','i','o','u'};
       int c{0},ans{0};
       int l{0},r{0};
       while(r<s.size())
       {
            auto it = find(vowels.begin(),vowels.end(),s[r]);
            c+=(it != vowels.end());
            if(r-l+1 == k)
            {
                ans = max(ans,c);
                auto it = find(vowels.begin(),vowels.end(),s[l]);
                c-=(it != vowels.end());
                ++l;

            }
            ++r;
       }
       return ans;
     }
};