class Solution {
    public List<Long> mergeAdjacent(int[] nums) {
        Stack<Long> stk=new Stack<>();
        List<Long> list=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            long n=(long)(nums[i]);
            if(!stk.isEmpty()){
                while(!stk.isEmpty()&&stk.peek()==n){
                    n=n+stk.pop();
                }
                stk.push(n);
            }
            else{
                stk.push(n);
            }
        }
        Collections.reverse(stk);
        while(!stk.isEmpty()){
            list.add(stk.pop());
        }
        return list;
    }
}