1class Solution {
2    public int[] dailyTemperatures(int[] temperatures) {
3        int[] ans = new int[temperatures.length];
4        Stack<Integer> idxs = new Stack<>();
5        for(int i = 0 ; i < temperatures.length;++i)
6        {
7            //Found solution for unresolved items in top stack 
8            while(!idxs.empty() && temperatures[idxs.peek()] < temperatures[i] )
9            {
10                ans[idxs.peek()] = i -idxs.peek();
11                idxs.pop();
12            }
13            //adding unresolved item 
14            idxs.push(i);
15        }
16        return ans;
17        
18    }
19}