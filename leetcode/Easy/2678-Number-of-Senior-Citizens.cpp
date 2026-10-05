class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniors = 0;
        for(string sub : details)
        {
            string age_str = sub.substr(11,2);
            int age = stoi(age_str);
            if(age > 60 )
                ++seniors;
        }
        return seniors;
    }
};