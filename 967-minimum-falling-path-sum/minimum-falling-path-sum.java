class Solution {
    int min=(int)1e6;
    int func(int[][] matrix,int r,int c,int[][] dp,int sum){
        int n=matrix.length;
        int m=matrix[0].length;
        if(r>=m||c>=n||r<0||c<0) return (int)1e6;
        if(r==n-1){
            return matrix[r][c];
        }
        if(dp[r][c]!=1e6) return dp[r][c];
        int left = func(matrix,r+1,c-1,dp,sum);
        int down=func(matrix,r+1,c,dp,sum);
        int right=func(matrix,r+1,c+1,dp,sum);
        return dp[r][c]=Math.min(left,Math.min(down,right))+matrix[r][c];
    }
    public int minFallingPathSum(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        int[][] dp=new int[m+1][n+1];
        for(int[] it:dp){
            Arrays.fill(it,(int)1e6);
        }
        for(int i=0;i<n;i++){
       min=Math.min(min, func(matrix,0,i,dp,0));
        }
        return min;
    }
}