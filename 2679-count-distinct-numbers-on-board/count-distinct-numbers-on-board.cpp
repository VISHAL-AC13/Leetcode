class Solution {
public:
    int distinctIntegers(int n) {
        int l;
        if(n==1)return n;
        for(int i=n-1;i<n;i++){
            if(n%(n-1)==1){
                l=i;
            }
        }
        return l;
    }
};