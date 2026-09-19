class Solution {
public:
    // int stairsMem(int n,vector<int>&dp){
    //     if(n==1)
    //     return 1;
    //     if(n==2)
    //     return 2;
    //     if(dp[n]!=-1)
    //     return dp[n];
    //    return dp[n]= stairsMem(n-1,dp)+stairsMem(n-2,dp);
    // }

    int stairsTab(int n){
        vector<int>dp(n+2,-1);
        dp[1]=1;
        dp[2]=2;
        for(int i  =3;i<=n;i++){
        dp[i]  = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int climbStairs(int n) {
        // return stairs(n);
    //     vector<int>dp(n+1,-1);
    //    return  stairsMem(n,dp);
          return stairsTab(n);
    }
};