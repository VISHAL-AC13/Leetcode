class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int i=0;i<=n;i++){
            int count=0;
            int j=i;
            while(j>0){
                if(j&1==1){
                    ans[i]++;
                }
                j=j>>1;
            }
           
        }
        return ans;
    }
};