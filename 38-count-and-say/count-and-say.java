class Solution {
    public String countAndSay(int n) {
        String it="1";      
        for(int k=1;k<n;k++){
            int i=0;
            String next="";
            while(i<it.length()){
                int count=1;
            while(i<it.length()-1&&(it.charAt(i)==it.charAt(i+1))){
                i++;
                count++;
            }
            next+=Integer.toString(count)+it.charAt(i);
            i=i+1;
            }
            it=next;
        }
        return it;
    }
}