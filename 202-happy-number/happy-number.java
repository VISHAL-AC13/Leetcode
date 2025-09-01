class Solution {
    public int sumofdigits(int n){
        int sum=0;
         while(n>0){
                int rem=n%10;
                sum+=(rem*rem);
                n=n/10;
            }
            return sum;
    }
    public boolean isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=sumofdigits(slow);
            fast=sumofdigits(fast);
            fast=sumofdigits(fast);

        }while(slow!=fast);
        if(fast==1){
            return true;
        }
        else {
            return false;
        }
    }
}