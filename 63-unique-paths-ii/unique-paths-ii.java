class Solution {
    int func(int[][] grid,int r,int c,int[][] dp){
        int n=grid.length;
        int m=grid[0].length;
        if(r==n-1&&c==m-1){
            return 1;
        }
        if(r>=n||c>=m||grid[r][c]==1) return 0;
        if(dp[r][c]!=-1){
            return dp[r][c];
        }

        int right=func(grid,r,c+1,dp);
        int down=func(grid,r+1,c,dp);
        return dp[r][c]=right+down;
    }
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int n=obstacleGrid.length;
        int m=obstacleGrid[0].length;

        if(obstacleGrid[0][0]==1||obstacleGrid[n-1][m-1]==1) return 0;
        int[][] dp=new int[n+1][m+1];
        for(int[] it:dp){
            Arrays.fill(it,-1);
        }
        return func(obstacleGrid,0,0,dp);
    }
}