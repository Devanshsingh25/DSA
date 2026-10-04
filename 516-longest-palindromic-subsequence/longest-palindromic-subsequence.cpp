class Solution {
public:
    //  int lps(string s, string r,int i,int j, vector<vector<int>>&dp){
    //     if(i==s.size() || j==r.size())
    //     return 0;
    //      if(dp[i][j]!=-1){
    //         return dp[i][j];
    //      }

    //     if(s[i]==r[j])
    //   dp[i][j]= 1+lps(s,r,i+1,j+1,dp);
    //     else
    //    dp[i][j] =  max(lps(s,r,i+1,j,dp),lps(s,r,i,j+1,dp));

    //     return dp[i][j];
    //  }
      
     int lps(string s, string r,int i,int j){
        // if(i==s.size() || j==r.size())
        // return 0;
        int n = s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        // base-condition
        for(int i = 0;i<n+1;i++){
            dp[i][n]=0;
        }

        for(int j =0;j<n+1;j++){
            dp[n][j]=0;
        }
         for(int i =n-1;i>=0;i--){
        for(int j =n-1;j>=0;j--){
        if(s[i]==r[j])
      dp[i][j]= 1+dp[i+1][j+1];
        else
       dp[i][j] =  max(dp[i+1][j],dp[i][j+1]);
         }
         }
        return dp[0][0];
     }
      

    int longestPalindromeSubseq(string s) {
        string rev = s;
        int n = s.size();
        reverse(rev.begin(),rev.end());
        // return lps(s,rev,0,0);
        // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        // return lps(s,rev,0,0,dp);

        return lps(s,rev,0,0);
    }
};