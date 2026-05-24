1class Solution {
2public:
3    int passwordStrength(string password) {
4        unordered_set<char> distinct_letters;
5        string  special   = "!@#$";
6        int ans{0};
7        for(char &c :password)
8            distinct_letters.insert(c);
9        for(auto &c :distinct_letters)
10        {
11            if( c >= 'a' and c <='z')
12               { ans+=1;}
13            else if(c >= 'A' and c <='Z')
14                {ans+=2;}
15            else if( c >= '0' and c <='9')
16                {ans+=3;}
17            else if(special.find(c) != string::npos)
18{                ans+=5; 
19}
20        }
21        return  ans;
22    }
23};