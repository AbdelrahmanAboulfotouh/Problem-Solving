class Solution {
    public int countSeniors(String[] details) {
        int seniors = 0;
        for(String sub :details )
        {
            String ageStr = sub.substring(11,13);
            int age = Integer.parseInt(ageStr);
            if(age > 60)
                ++seniors;
        }
        return seniors;
       
        
    }
}