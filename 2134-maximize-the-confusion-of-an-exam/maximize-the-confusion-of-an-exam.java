class Solution {
  
    public int maxConsecutiveAnswers(String answer, int k) {
            int left=0,right=0;
            int n=answer.length();
            int ans2=0,ans=0;
            int tcnt=0,fcnt=0;
            while(right<n){
                if(answer.charAt(right)=='T') tcnt++;
                
               
                while(tcnt>k){
                    if(answer.charAt(left)=='T') tcnt--;
                    left++;
                }
                ans=Math.max(ans,right-left+1);
                right++;
            }
            left=0;
            right=0;
            while(right<n){
                
                if(answer.charAt(right)=='F') fcnt++;
               
                while(fcnt>k){
                    if(answer.charAt(left)=='F') fcnt--;
                    left++;
                }
                ans2=Math.max(ans2,right-left+1);
                right++;
            }
            return Math.max(ans,ans2);
              


    }
}