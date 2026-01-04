class Solution {
    public int sum(int start,int end,int[] nums){
        int sum=0;
        for(int i=start;i<=end;i++){
            sum+=nums[i];
        }
        return sum;
    }
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int[] sumleft=new int[n];
        int[] sumright=new int[n];
        int start=0;
        int end=nums.length-1;
        for(int i=0;i<nums.length;i++){
            sumleft[i]=sum(0,i,nums);
            sumright[i]=sum(i,n-1,nums);
        }
        for(int i=0;i<n;i++){
            if(sumleft[i]==sumright[i]){
                return i;
            }
        }
        return -1;
    }
}