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
21               {
22                 ++freq[s[i]];
23               if(firstPos.find(s[i]) == firstPos.end() )
24                firstPos[s[i]] =i;
25               }
26        }
27        vector<pair<char,int>> sortedFreq (freq.begin(),freq.end());
28       
29        sort(sortedFreq.begin(),sortedFreq.end(),[&](auto &a , auto&b)
30        {
31            if(a.second != b.second)
32                return a.second > b.second;
33            return firstPos[a.first] <  firstPos[b.first];
34        });
35        
36        queue<char>q;
37        for(int i{0};i<sortedFreq.size();++i)
38        {
39            int fr = sortedFreq[i].second;
40            char c = sortedFreq[i].first;
41            while(fr)
42            {
43                q.push(c);
44                --fr;
45            }
46        }
47        for(auto &c:s)
48        {
49            if(isVowel(c))
50            {
51                ans+=q.front();
52                q.pop();
53            }
54            else
55                ans+=c;
56        }
57        return ans;
58    }
59};