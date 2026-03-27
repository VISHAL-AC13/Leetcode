class Solution {
    public String clearDigits(String s) {
        Stack stk=new Stack<>();
        int n=s.length();
        int i=0;
        while(i<n){
            if(Character.isDigit(s.charAt(i))){
                stk.pop();
            }
            else{
                stk.push(s.charAt(i));
            }
            i++;
        }
        String str="";
        while(!stk.isEmpty()){
            str+=stk.pop();
        }
        return new StringBuilder(str).reverse().toString();
    }
}