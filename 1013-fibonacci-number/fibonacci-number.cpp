class Solution {
public:
    // int fibonacci(int n,vector<int>&dp){
    //     if(n==0)
    //     return 0;
    //     if(n==1)
    //     return 1;
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }

    //     dp[n]= fibonacci(n-1,dp)+fibonacci(n-2,dp);
    //     return dp[n];
    // }
     int tabulation(int n){
        vector<int>v(n+2);
        v[0]=0;
        v[1]=1;
        for(int i =2;i<=n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v[n];
     }

    int fib(int n) {
        // return fibonacci(n);
        // vector<int>dp(n+1,-1);
        // return fibonacci(n,dp);
        return tabulation(n);
        
    }
};