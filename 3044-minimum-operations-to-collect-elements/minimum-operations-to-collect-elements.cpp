class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long int taken=0;
        int operation=0;
        for(int i=nums.size()-1;i>=0;i--){
            int curr_bit=nums[i]-1;
            operation++;
            if(curr_bit<k){
                taken|=(1LL<<curr_bit);
            }
            if(taken==(1LL<<k)-1){
                break;
            }
        }
        return operation;
    }
};