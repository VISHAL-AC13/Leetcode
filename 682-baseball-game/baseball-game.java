class Solution {

    public int calPoints(String[] op) {
        Stack<Integer> stk=new Stack<>();
        for(int i=0;i<op.length;i++){
            if(op[i].equals("C")){
                if(!stk.isEmpty()) stk.pop();
            }
            else if(op[i].equals("D")){
                int a=stk.peek();
                stk.push(a*2);
            }
            else if(op[i].equals("+")){
                int a=0;
                int b=0;
                if(!stk.isEmpty()) {
                    a=stk.pop();
                } 
                if(!stk.isEmpty())  b=stk.pop();
                stk.push(b);
                stk.push(a);
                stk.push(a+b);
            }
            else{
                int a=Integer.parseInt(op[i]);
                stk.push(a);
            }
        }
        int tot=0;
        while(!stk.isEmpty()){
            tot+=stk.pop();
        }
        return tot;
    }
}