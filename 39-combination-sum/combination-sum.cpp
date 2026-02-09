class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void func(vector<int>&arr,int index,int sum,int target){
            if(sum==target){
                ans.push_back(temp);
                return;
            }
        if(index==arr.size()){
            return;
        }
        if(sum>target) return ;
        sum+=arr[index];
        temp.push_back(arr[index]);
        func(arr,index,sum,target);
        sum-=arr[index];
        temp.pop_back();
        func(arr,index+1,sum,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        func(candidates,0,0,target);
        return ans;
    }
};