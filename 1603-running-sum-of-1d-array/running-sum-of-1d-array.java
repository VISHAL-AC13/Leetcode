class Solution {
    public int[] runningSum(int[] nums) {
        int n=nums.length;
        int[] res=new int[n];
        res[0]=nums[0];
        int sum=nums[0]; 
        for(int i=1;i<n;i++){
            sum+=nums[i];
            res[i]=sum;
        }
        return res;
    }
}