class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int sum=0;
        int mini=0;
        int ans=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans=Math.max(ans,sum-mini);
            mini=Math.min(mini,sum);
        }
        return ans;
    }
}