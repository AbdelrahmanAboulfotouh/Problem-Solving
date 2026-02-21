1class Solution {
2    public List<List<Integer>> minimumAbsDifference(int[] arr) {
3        List<List<Integer>>ans = new ArrayList<>();
4        Arrays.sort(arr);
5        Integer mn = Integer.MAX_VALUE;
6        for(int i = 0 , j = 1 ;i<arr.length-1;++i,++j)
7        {
8            int diff = Math.abs(arr[i] - arr[j]);
9            mn = Math.min(mn,diff);
10        }
11        for(int i = 0 , j = 1 ;i<arr.length-1;++i,++j)
12        {
13            int diff = Math.abs(arr[i] - arr[j]);
14            ArrayList<Integer> list = new ArrayList<>();
15            list.add(arr[i]);
16            list.add(arr[j]);
17            if(diff == mn)
18                ans.add(list);
19
20
21        }
22        
23        return ans;
24        
25    }
26}