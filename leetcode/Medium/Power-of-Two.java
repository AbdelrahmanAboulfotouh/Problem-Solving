1class Solution {
2    public boolean isPowerOfTwo(int n) {
3        if(n<=0)
4        return false;
5        double result = Math.log(n) / Math.log(2);
6        double eps = 1e-10;
7        boolean isInteger = Math.abs(result -  Math.round(result)) < eps ;
8        return isInteger;
9    }
10}