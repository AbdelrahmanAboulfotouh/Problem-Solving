class Solution {
public:
    string strWithout3a3b(int a, int b) 
    {
        string ans;
        while(a and b)
        {
            if(a > b )
            {
                ans.append(2,'a');
                ans.push_back('b');
                a-=2,b-=1;
            }
            else if(b > a)
            {
                ans.append(2,'b');
                ans.push_back('a');
                b-=2,a-=1;
            }
            else
            {
                ans.push_back('a');
                ans.push_back('b');
                --a,--b;

            }
        }
        ans.append(a,'a');
        ans.append(b,'b');
        
      return ans;   
    }
};