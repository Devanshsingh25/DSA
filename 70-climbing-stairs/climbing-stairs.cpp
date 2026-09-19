class Solution {
public:
    int stairs(int n,vector<int>&dp){
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        if(dp[n]!=-1)
        return dp[n];
       return dp[n]= stairs(n-1,dp)+stairs(n-2,dp);
    }
    int climbStairs(int n) {
        // return stairs(n);
        vector<int>dp(n+1,-1);
       return  stairs(n,dp);
    }
};