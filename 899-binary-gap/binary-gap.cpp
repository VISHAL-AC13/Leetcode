class Solution {
public:
    int binaryGap(int n) {
        int last_one=-1;
        int curdist=0,dist=0;;
        int curr=0,adj;
        while(n>0){
            if((n&1)==1){
                if(last_one==-1){
                    last_one=curr;
                }
                else{
                    adj=curr;
                    curdist=adj-last_one;
                }
                if(curdist>=dist){
                    dist=curdist;
                }
                last_one=curr;
            }
            curr++;
            n>>=1;
        }
        return dist;
    }
};