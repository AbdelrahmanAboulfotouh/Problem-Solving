class Solution {
public:

    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<pair<int,int>>st;
        for(int i{0};i<asteroids.size();++i)
        {
            if(asteroids[i] > 0)
                st.push({asteroids[i],i});
            else
            {
                while(!st.empty() and abs(asteroids[i]) > st.top().first)
                {
                    asteroids[st.top().second]=0;
                    st.pop();
                }
                if(!st.empty())
                {
                    if( abs(asteroids[i]) == st.top().first)
                    {
                        asteroids[i] = 0;
                        asteroids[st.top().second]=0;
                        st.pop();
                    }
                    else
                        asteroids[i] = 0;
                }
            }

            
        }
        vector<int>ans;
        for(auto &i:asteroids)
        {
            if(!i)
                continue;
            ans.push_back(i);
        }
        return ans;
    }
};