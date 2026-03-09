class Solution {
      int func(String s1,String s2,int i,int j,int len,int[][] dp){
        int n=s1.length();
        int m=s2.length();
        if(i>=n||j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        char c1=s1.charAt(i);
        char c2=s2.charAt(j);
        if(c1==c2){
            return 1+func(s1,s2,i+1,j+1,len,dp);
        }
        else{
            int len1=func(s1,s2,i,j+1,len,dp);
            int len2=func(s1,s2,i+1,j,len,dp);
            len=Math.max(len1,len2);
        }
        return dp[i][j]=len;
    }
    public int minDistance(String s1, String s2) {
         int n=s1.length();
        int m=s2.length();
        int[][] dp=new int[n+1][m+1];
        for(int i=0;i<n;i++){
            Arrays.fill(dp[i],-1);
        }
        int substring=func(s1,s2,0,0,0,dp);
        return (n-substring)+(m-substring);
    }
}