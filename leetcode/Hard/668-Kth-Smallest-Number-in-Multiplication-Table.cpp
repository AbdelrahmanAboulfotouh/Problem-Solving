class Solution {
public:
int countLessThanVal(int m, int n, int val){
    int count{0};
    for(int row{1};row<=m;++row)
    {
        count+=min(val/row,n);
    }
    return count;
    
}
    int findKthNumber(int m, int n, int k) 
    {
      int l{1},r=n*m;
      int ans=-1;
      while(l<=r)
      {
        int mid = l + (r-l)/2;
        if(countLessThanVal(m,n,mid)<k)
        {
            l = mid+1;
        }
        else
        {
            r=mid-1;
            ans = mid;
        }
      }
        return ans;
    }
};