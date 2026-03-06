class Solution {
public:
    int func(vector<int>& coins,int index,int amount ,vector<vector<int>>&dp){
        if(amount<0){
            return 0;
        }
        if(amount==0) return 1;
        if(index==coins.size()){
            return 0;
        } 
        if(dp[index][amount]!=-1) return dp[index][amount];
        int take=func(coins,index,amount-coins[index],dp);
        int nottake=func(coins,index+1,amount,dp);
        return dp[index][amount]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return func(coins,0,amount,dp);

    }
};