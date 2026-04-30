1class Solution {
2public:
3bool isVowel(char c)
4{
5    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
6    for(auto &e:vowels)
7    {
8        if(c == e)
9            return true;
10    }
11    return false;
12}
13    string sortVowels(string s) {
14        string ans;
15        unordered_map<char,int> freq;
16        unordered_map<char,int> firstPos;
17
18        for(int i{0}; i<s.size();++i)
19        {
20            if(isVowel(s[i]))
21               { ++freq[s[i]];
22               if(firstPos.find(s[i]) == firstPos.end() )
23                firstPos[s[i]] =i;
24               }
25        }
26        vector<pair<char,int>> sortedFreq (freq.begin(),freq.end());
27       
28        sort(sortedFreq.begin(),sortedFreq.end(),[&](auto &a , auto&b)
29        {
30            if(a.second != b.second)
31                return a.second > b.second;
32            return firstPos[a.first] <  firstPos[b.first];
33        });
34        queue<char>q;
35        for(int i{0};i<sortedFreq.size();++i)
36        {
37            int fr = sortedFreq[i].second;
38            char c = sortedFreq[i].first;
39            while(fr)
40            {
41                q.push(c);
42                --fr;
43            }
44        }
45        for(auto &c:s)
46        {
47            if(isVowel(c))
48            {
49                ans+=q.front();
50                q.pop();
51            }
52            else
53                ans+=c;
54        }
55        return ans;
56    }
57};