class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumps=0;
        int m=-1;
        //if(nums.size()==1) return true;
        for(int i=0;i<nums.size()-1;i++){
            m=max(m,nums[i]+i);
            if(nums[i]==0&&m<=i){
                return false;
            }

        
        }
        return true;
    }
};