class Solution {
public:
    int totalMoney(int n) {
        int sum=0;;
        if(n<=7){
            for(int i=1;i<=n;i++){
                sum+=i;
            }
        }
        else{
            int in=1;
            int cpy=in;
            for(int i=1;i<=n;i++){
                int j=in;
                sum+=j;
                in++;
                if(i%7==0){
                    in=cpy+1;
                    cpy++;
                }
            }
        }
        return sum;
    }
};