class Solution {
public:
   int totalFruit(vector<int>& fruits)
{
    int n = fruits.size();
    int l{0},r{1},ans{1};
    map<int,int>st;
    st[fruits[l]]=1;
    while(r < n)
    {
        st[fruits[r]]++ ;
        while(st.size() > 2)
        {
            st[fruits[l]]--;
            if(st[fruits[l]] == 0)
                st.erase(fruits[l]);
            ++l;

        }

        ans = max(ans,r-l+1);
        ++r;
    }
    return ans;
}

};