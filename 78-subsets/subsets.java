class Solution {
    List<List<Integer>> ans=new ArrayList<>();
    void func(int[] nums,int index,List<Integer> curr){
        if(index==nums.length){
            ans.add(new ArrayList<>(curr));
            return;
        }
        curr.add(nums[index]);
        func(nums,index+1,curr);
        curr.remove(curr.size()-1);
        func(nums,index+1,curr);
    }
    public List<List<Integer>> subsets(int[] nums) {
        func(nums,0,new ArrayList<>());
        return ans;
    }
}