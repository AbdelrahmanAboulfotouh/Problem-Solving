class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
     for(auto arr:matrix)
         if(binary_search(arr.begin(), arr.end(),target))
             return true;



    return false;
    }
};