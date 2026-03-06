class Solution {
public:
int func(vector<int>& arr,int index,int amount,vector<vector<int>>& dp){
    if(amount==0) return 0;
    if(amount<0) return 1e9;
    if(index==arr.size()){
        return 1e9;
    }
    if(dp[index][amount]!=-1) return dp[index][amount];
    int take=1+func(arr,index,amount-arr[index],dp);
    int nottake=func(arr,index+1,amount,dp);
    return dp[index][amount]=min(take,nottake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        int moves=func(coins,0,amount,dp);
        if(moves>=1e9) return -1;
        return moves;
    }
};