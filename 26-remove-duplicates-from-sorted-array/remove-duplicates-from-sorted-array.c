int removeDuplicates(int* nums, int numsSize) {
    int ind=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=nums[ind-1]){
              nums[ind++]=nums[i];
        }
    }
    return ind;
}