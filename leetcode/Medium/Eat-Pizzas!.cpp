class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(), pizzas.end());
        int sz = pizzas.size();
        int total_days = sz / 4 ;
        int even_days = total_days/2 ;
        int odd_days = total_days - even_days ;
        long long  sum{0};
        //---------------------------------------
        bool selected = false;
        for(int i = sz - 1 ; i>=0 ; --i)
        {
            if(odd_days)
               { 
                    sum+=pizzas[i];
                    --odd_days;
                    continue;
                }
            if(selected and even_days)
            {
                sum+=pizzas[i];
                selected = false;
                --even_days;
            }
            else
                selected = true;

            if(!even_days)
                break;
        }
        return sum ;
    }
};