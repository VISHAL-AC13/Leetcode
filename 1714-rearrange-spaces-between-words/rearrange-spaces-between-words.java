class Solution {
    public String reorderSpaces(String text) {
        int spaces=0;
        for(int i=0;i<text.length();i++){
            if(text.charAt(i)==' ') spaces++;
        }
        String[] words=text.trim().split("\\s+");
        int n=words.length;
        int k=n-1;
        if(n==1){
            k=n;
        }
        int extra=spaces%(k);
        spaces=spaces/(k);
        String ans="";
        for(int i=0;i<n;i++){
            ans+=words[i];
            if(i!=n-1||n==1){
            for(int j=0;j<spaces;j++){
                ans+=" ";
            }
            }
        }
            for(int j=0;j<extra;j++){
                ans+=" ";
            }
        return ans;
    }
}