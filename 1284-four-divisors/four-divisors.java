class Solution {
    public int sumFourDivisors(int[] nums) {
        int finsum=0;
        for(int i=0;i<nums.length;i++){
            int count=0;
            int sum=0;
            int n=nums[i];
            for(int j=1;j*j<=n;j++){
                if(nums[i]%j==0){
                    int d=nums[i]/j;
                    if(j!=d){
                        sum+=j+d;
                        count+=2;
                    }
                    else{
                        sum+=j;
                        count++;
                    }
                }
            }
            if(count==4){
                finsum+=sum;
            }
           
        }
        return finsum;
    }
}