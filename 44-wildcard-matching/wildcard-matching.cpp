class Solution {
public:
bool ans=false;
    bool func(string& s,string& p,int i,int j,vector<vector<int>>& dp){
        int n=s.size();
        int m=p.size();
        if(i<0&&j<0){
            return true;
        }
        if(i>=0&&j<0){
            return false;
        }
        if(i<0&&j>=0){
            while(j>=0&&p[j]=='*'){
                j--;
            }
            if(j<0) return true;
            else return false;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==p[j]||p[j]=='?'){
            return dp[i][j]= func(s,p,i-1,j-1,dp);
        }
        else if(p[j]=='*'){
            return dp[i][j]= func(s,p,i-1,j,dp)||func(s,p,i,j-1,dp); 
        }
        else{
            return dp[i][j]=false;
        }
       
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

        return func(s,p,n-1,m-1,dp);
    }
};