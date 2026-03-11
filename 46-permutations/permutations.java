class Solution {
    List<List<Integer>> ans=new ArrayList<>();
    void func(int[] arr,List<Integer> curr,boolean[] used){
        if(curr.size()==arr.length){
            ans.add(new ArrayList<>(curr));
            return;
        }
        for(int i=0;i<arr.length;i++){
            if(used[i]==false){
                used[i]=true;
                curr.add(arr[i]);
                func(arr,curr,used);
                curr.remove(curr.size()-1);
                used[i]=false;
            }
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        boolean[] used=new boolean[nums.length];
        func(nums,new ArrayList<>(),used);
        return ans;
    }
}