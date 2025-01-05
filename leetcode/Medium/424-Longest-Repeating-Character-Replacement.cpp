class Solution {
public:
   int characterReplacement(string s, int k)
{
   int ans{1},max_fr{0};
   int i{0},j{0};
   vector<int>fr(26);
    while (i<s.size())
    {
        ++fr[s[i] - 'A'];
        max_fr=max(max_fr,fr[s[i] - 'A']);
        if(i-j+1 - max_fr > k)
            --fr[s[j++] - 'A'];
            
        
        ans=max(ans,i-j+1);
        ++i;
    }
    return ans;
}

};