class Solution {
public:
   string reverseWords(string s) {
    vector<string> hold;
    for(int i{0};i<s.size();++i)
    {
        if(s[i] == ' ');
        else
        {
            string sub;
            if(s.find(' ') != string::npos)
            {
                sub = s.substr(i,s.find(' ',i)-i);
            }
            else
                sub=s.substr(i,s.size()-i);
            i+=sub.size();
            hold.push_back(sub);

        }
    }
    string ans;
    for(int i=hold.size()-1;i>=0;--i)
    {
        ans+=hold[i];
        if(i!=0)
            ans+=' ';
    }
    return ans;
}
};