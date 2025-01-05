class Solution {
public:
    bool checkInclusion(string s1, string s2)
{
    if(s1.size() > s2.size())
        return false;
    int l{0};
    std::sort(s1.begin(), s1.end());
    while (l<s2.size())
    {
        string sub = s2.substr(l,s1.size());
        sort(sub.begin(),sub.end());
        if(s1 == sub)
            return true;
        ++l;
    }
    return false;
}

};