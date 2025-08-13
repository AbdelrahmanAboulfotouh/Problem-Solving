class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int max_ditance = INT_MIN;
        for(int i{0};i<seats.size();++i)
        {
            if(seats[i] == 0)
            {
                int left_weight{0};
                for(int j = i+1  ; j <seats.size();++j)
                    {
                        ++left_weight;
                        if(seats[j] == 1)
                                break;
                        
                    }
                int right_weight{0};
                for(int j = i-1 ; j>=0 ; --j)
                {
                    ++right_weight;
                    if(seats[j] == 1)
                        break;

               
                }
                int closeset;
                if(right_weight and left_weight ) 
                    closeset = min(left_weight,right_weight);
                else
                    closeset = max(left_weight,right_weight);

                max_ditance = max(max_ditance,closeset);

            }
        }
        return max_ditance;
    }
};