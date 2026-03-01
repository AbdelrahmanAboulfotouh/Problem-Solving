1class Solution {
2    public void squarifiy(int[] nums)
3{
4       for(int i = 0 ;i <nums.length;++i)
5       {
6        nums[i]*=nums[i];
7       }
8    if(nums[0] > nums[nums.length-1])
9    {
10        for (int i = 0; i < nums.length / 2; i++) {
11            int temp = nums[i];
12            nums[i] = nums[nums.length - 1 - i];
13            nums[nums.length - 1 - i] = temp;
14            }
15    }
16}
17
18    public int[] sortedSquares(int[] nums) 
19    {
20      if(nums[0] >= 0 || nums.length == 1 || nums[nums.length-1] < 0)
21            {
22                squarifiy(nums);
23                return nums;
24            }
25
26       int[] ans = new int[nums.length];
27       int idx=0;
28
29         int P =-1 ,  N = -1;
30      for(int i=0;i<nums.length;++i)
31        if(nums[i] > -1)
32        {
33            P = i ;
34            N = P -1;
35            break;
36        }
37      
38   
39      while(N >=0 && P < nums.length)
40      {
41        if(Math.abs(nums[N]) >= nums[P])
42        {
43              ans[idx] = nums[P]*nums[P];
44              idx++;
45            ++P;
46           
47        } 
48        else
49        {
50          ans[idx] = nums[N]*nums[N];
51          ++idx;
52            --N;
53        }
54
55      }
56       while(N >=0)
57       {
58           ans[idx] = nums[N]*nums[N];
59          ++idx;
60            --N;
61       }
62       while(P < nums.length)
63       {
64             ans[idx] = nums[P]*nums[P];
65              idx++;
66            ++P;
67       }
68
69
70    return ans;
71    }
72}
73