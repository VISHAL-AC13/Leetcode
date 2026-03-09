class Solution {
     int func(String str,int i,int j,int[][] dp){
        char c1=str.charAt(i);
        char c2=str.charAt(j);
        if(i>=j){
            return 0;
        }
     
        if(dp[i][j]!=-1) return dp[i][j];
        if(c1!=c2){
          return dp[i][j]=1+Math.min(func(str,i+1,j,dp),func(str,i,j-1,dp));  
        } 
        else{
            int len1=func(str,i+1,j-1,dp);
            return len1;
        }
        
    }   
    public int minInsertions(String str) {
         int n=str.length();
        int[][] dp=new int [n+1][n+1];
        for(int i=0;i<n;i++){
            Arrays.fill(dp[i],-1);
        }
        return func(str,0,n-1,dp);
    }
}