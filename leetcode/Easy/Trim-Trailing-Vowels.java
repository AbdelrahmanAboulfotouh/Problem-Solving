1class Solution {
2    boolean vowel(char c)
3    {
4        char[] vowels= new char[] {'a', 'e', 'i', 'o',  'u'};
5        boolean isVowel = false;
6            for(char v : vowels)
7                    if(c == v)
8                    {
9                            isVowel = true;
10                            break;
11                    }
12        
13    return isVowel;
14    }
15    public String trimTrailingVowels(String s) {
16        int sz = s.length(); int idx = -1 ;
17        for(int i = sz -1 ; i>= 0 ;--i)
18        {
19            if(!vowel(s.charAt(i)))
20                {
21                    idx = i ;
22                    break;
23                }
24        }
25        return s.substring(0,idx+1);
26        
27    }
28}