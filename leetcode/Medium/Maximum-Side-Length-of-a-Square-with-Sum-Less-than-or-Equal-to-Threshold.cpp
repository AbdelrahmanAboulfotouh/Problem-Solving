class Solution {
public:
    vector<vector<int>> turn_into_2d_perfix_sum(vector<vector<int>>grid)
    {
        vector<vector<int>>perfix_sum = grid;
        perfix_sum = grid;
        //column perfix sum
        for(int i{0};i<perfix_sum.size();++i)
            for(int j{1};j<perfix_sum[0].size();++j)
                perfix_sum[i][j]+=perfix_sum[i][j-1];
        //Row perfix sum
        for(int i{1};i<perfix_sum.size();++i)
            for(int j{0};j<perfix_sum[0].size();++j)
                perfix_sum[i][j]+=perfix_sum[i-1][j];

        return perfix_sum;
    }
    int maxSideLength(vector<vector<int>>& mat,int threshold) {

        // BINARY SEARCH ON MATRIX WITH OPTIMIZATION : O(m*n*log(m*n))
        vector<vector<int> > prefix= turn_into_2d_perfix_sum(mat);

        // preprocessing step
        //prefix sum : w r t fix top left corner at mat(0,0)
        int currLen=0,maxLen=0;
        // finding max length using BS w r to bottom right corner mat(i,j)
        for(int i=0;i<prefix.size();i++){
            currLen=0;
            for(int j=0;j<prefix[0].size();j++){
                int lo=1,hi=min(i,j)+1,mid;
                while(lo< hi){
                    mid=lo+(hi-lo+1)/2;
                    if(sumSubMatrix(prefix,i,j,mid)> threshold){
                        hi=mid-1;
                    }
                    else
                        lo=mid;
                }

                if(sumSubMatrix(prefix,i,j,lo) <=threshold)
                    currLen=lo;
                maxLen=max(currLen,maxLen);
            }
        }
        return maxLen;
    }

    int sumSubMatrix(vector<vector<int>>& prefix,int botI,int botJ,int l){
        int sum=0,topI=botI-l,topJ=botJ-l;
        sum+=prefix[botI][botJ];
        if(topI>=0)
            sum-=prefix[topI][botJ];
        if(topJ>=0)
            sum-=prefix[botI][topJ];
        if(topI>=0 && topJ>=0)
            sum+=prefix[topI][topJ];
        return sum;
    }
};
