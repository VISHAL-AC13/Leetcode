class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int freq[n];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>=2){
                return nums[i];
            }
        }
        return 0;
    }
};