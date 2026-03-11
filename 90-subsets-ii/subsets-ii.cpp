class Solution {
public:
    set<vector<int>> st;
    void func(vector<int>& nums,int index,vector<int>& curr){
        if(index==nums.size()){
            vector<int> temp=curr;
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }
        curr.push_back(nums[index]);
        func(nums,index+1,curr);
        curr.pop_back();
        func(nums,index+1,curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        func(nums,0,curr);
        return vector(st.begin(),st.end());
    }
};