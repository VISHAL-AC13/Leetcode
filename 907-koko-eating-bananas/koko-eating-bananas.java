class Solution {
    boolean func(int[] piles,int x,long k){
        long  cnt=0;
        for(int i=0;i<piles.length;i++){
            cnt+=(int)Math.ceil((double) piles[i]/x);
        }
        return cnt<=k;
    }
    public int minEatingSpeed(int[] piles, int k) {
     int left=1;
     int max=0;
     for(int i=0;i<piles.length;i++){
        max=Math.max(max,piles[i]);
     }   
     int right=max;
     int ans=-1;
     while(left<=right){
        int mid=left+(right-left)/2;
        if(func(piles,mid,(long)k)){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
     }
     return  ans;
    }
}