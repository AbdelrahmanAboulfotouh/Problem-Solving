class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int  ans{0};
        stack<int>sk;
        for(auto &c:tokens)
        {
            if(c == "+" and !sk.empty())
            {
                int x =sk.top();
                sk.pop();
                sk.top()+=x;
            }
            else if (c == "-" and !sk.empty())
            {
               int x =sk.top();
                sk.pop();
                sk.top()-=x; 
            }
            else if (c== "*" and !sk.empty())
            {
                int x =sk.top();
                sk.pop();
                sk.top()*=x;
            }
            else if (c == "/" and !sk.empty())
            {
                int x =sk.top();
                sk.pop();
                sk.top()/=x;
            }
            else
            {
                if(c !="+" and c !="-" and c!="/" and c!="*")
                    {int x = stoi(c);
                    sk.push(x);}

            }
            
        }
        return sk.top();
    }
};