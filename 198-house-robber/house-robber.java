class Solution {
    int func(int[] nums,int index,int[] dp){
        int n=nums.length;
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        int take=nums[index]+func(nums,index+2,dp);
        int nottake=func(nums,index+1,dp);
        return dp[index]=Math.max(take,nottake);
    }
    public int rob(int[] nums) {
        int n=nums.length;
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);
        return func(nums,0,dp);
    }
}