class Solution {
    boolean func(int[] candies,int x,long k){
        long cnt=0;
        for(int i=0;i<candies.length;i++){
            cnt+=(long)candies[i]/(long)x;
        }
        return cnt>=k;
    }
    public int maximumCandies(int[] candies, long k) {
        if(candies.length==1){
            return candies[0]/(int)k;
        }
        int left=1,right=0;
        for(int it:candies){
            right=Math.max(right,it);
        }
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(func(candies,mid,k)){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;   
    }
}