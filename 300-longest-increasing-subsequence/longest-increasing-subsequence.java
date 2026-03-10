class Solution {
    
    public int lengthOfLIS(int[] nums) {
        int n=nums.length;
        int[] temp=new int[n+1];
        int len=0;
        ArrayList<Integer> ans=new ArrayList<>();
        for(int num:nums){
            int i=Arrays.binarySearch(temp,0,len,num);
            if(i<0){
                 i=Math.abs(i+1);
            }
            
            temp[i]=num;
            
            if(i==len){
                len++;
            }

        }
        return len;
    }
}