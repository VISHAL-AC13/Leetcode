class Solution {
    public boolean hasAlternatingBits(int n) {
            int last_bit=-1;
            while(n>0){
                if((n&1)==last_bit){
                    return false;
                }
                last_bit=n&1;
                n>>=1;
            }   
            return true;
    }
}