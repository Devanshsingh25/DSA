class Solution {
public:
    //  int lcs(string text1, string text2, int m,int n,vector<vector<int>>dp){
    //        if(m==0 || n==0){
    //         return 0;
    //        }
    //        if(dp[m][n]!=-1){
    //         return dp[m][n];
    //        }
    //        if(text1[m-1]==text2[n-1]){
    //        dp[m][n]= 1+lcs(text1,text2,m-1,n-1,dp);
    //        }
    //       else
    //     dp[m][n]= max(lcs(text1,text2,m-1,n,dp),lcs(text1,text2,m,n-1,dp));
    // return dp[m][n];
    //  }
     
      int lcs(string text1, string text2, int m,int n){
       

       // creating a 2-D array
           vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
           // base condition
           for(int i  =0;i<n+1;i++){
                dp[0][i]=0;
           }
           for(int i =0;i<m+1;i++){
            dp[i][0] = 0;
           }
          
           for(int i =1;i<m+1;i++){
            for(int j = 1;j<n+1;j++){
           if(text1[i-1]==text2[j-1]){
           dp[i][j]= 1+dp[i-1][j-1];
           }
          else
        dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
           }
           }
    return dp[m][n];
     }
     


    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
    //   int res = lcs(text1,text2,m,n);
    //   return res;
    // vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    // return lcs(text1,text2,m,n,dp);
    return lcs(text1,text2,m,n);

    }
};