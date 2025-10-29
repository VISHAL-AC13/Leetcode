class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          bool seen[10]={false};
    int count=0;
    unordered_map<int,int> arr ;
    int n=nums.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[nums[i]]==0){
            arr[nums[i]]++;
            nums[j]=nums[i];
            j++;
            count++;
        }
    }
    return count;
    }
};