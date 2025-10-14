class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(k<=1){
            return true;
        }
        int i=0,fincount=0;
        while(i<=nums.size()-(2*k)){
        bool increasing1=true;
        bool increasing2=true;
            int j=i;
            int cmp=nums[i];
          
            for(int j=i+1;j<i+k;j++){
                if(nums[j]<=nums[j-1]){
                    increasing1=false;
                    break;
                }
            }
            for(int j=i+k+1;j<i+(2*k);j++){
                if(nums[j]<=nums[j-1]){
                    increasing2=false;
                    break;
                }
            }
            if(increasing1&&increasing2){
                return true;
            }  
            i++;
            }

            
        return false;
        }

    
};