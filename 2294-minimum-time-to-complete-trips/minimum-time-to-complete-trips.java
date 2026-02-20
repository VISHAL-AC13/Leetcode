class Solution {
    boolean func(int[] time,long t,long k){
        long cnt=0;
        for(int i=0;i<time.length;i++){
            cnt+=(t/(long)time[i]);
        }
        return cnt>=k;
    }
    public long minimumTime(int[] time, int k) {
        long min=(long)time[0];
        if(time.length==1){
            return min*(long)k;
        }
       for(int i=1;i<time.length;i++){
        min=Math.min(min,time[i]);
       } 
        long left=min;
        long right=min*k;
        long ans=-1;
        while(left<=right){
            long mid=left+(right-left)/2;
            if(func(time,mid,(long)k)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
}