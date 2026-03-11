1class Solution {
2public:
3bool vowel(char &c)
4{
5    unordered_map<char,bool>mp;
6    mp['a'] = true; mp[ 'e'] = true; mp['i'] = true; mp['o'] = true;mp['u'] = true;
7    return mp[c];
8}
9    string trimTrailingVowels(string s) {
10        int sz =s.size();int idx = -1;
11        for(int i = sz-1 ; i >=0 ;--i)
12        {
13            if(!vowel(s[i]))
14                {
15                    idx =i ;
16                    break;
17                }
18        }
19        return s.substr(0,idx+1);
20    }
21};