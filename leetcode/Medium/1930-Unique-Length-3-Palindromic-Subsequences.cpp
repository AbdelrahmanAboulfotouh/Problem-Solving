class Solution {
public:
    int countPalindromicSubsequence(string s)
{
    set<char>keys;
    int ans{}, j{},sz=s.length();
    for(int i{0};i<sz;++i)
    {
        
        if(keys.find(s[i]) != keys.end())
            continue;
        bool f{};
        j = sz-1; //backward idx
        while (j-i+1 >= 3) // finding valid palindrome
        {
            if(s[j] == s[i])
            {
                f = true ;
                break;

            }
            --j;
        }
        if(f)
        {
            int before = keys.size();
            keys.insert(s[i]);
            if(before < keys.size())//Check palindrome redundancy
            {
                string between ={ s.begin()+i+1,s.end()-(sz-j)};
                set<char>len={between.begin(),between.end()};
                ans+=len.size();
            }
        }


    }
    return ans;
}

};