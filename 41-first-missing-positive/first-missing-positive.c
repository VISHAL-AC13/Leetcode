int firstMissingPositive(int* nums, int numsSize) {

        int freq[numsSize+2];
        for(int i=0;i<numsSize+2;i++){
            freq[i]=0;
        }
        for(int i=0;i<numsSize;i++){
            if(nums[i]>0&&nums[i]<=numsSize){
                freq[nums[i]]=nums[i];
            }
        }
        for(int i=1;i<=numsSize+1;i++){
            if(freq[i]!=i){
                return i;
            }
        }   
        return -1;
}