class Solution {
public:

    int lisMem(vector<int>&nums,int curr,int prev,vector<vector<int>>&dp){
        int n = nums.size();
        if(curr>=n)return 0;
        if(dp[curr][prev+1]!=-1){
           return dp[curr][prev+1];
        }
        int inc=0;
        int exc;
        if(prev==-1 ||nums[prev]<nums[curr])
          inc = 1+lisMem(nums,curr+1,curr,dp);
   
         exc = 0+lisMem(nums,curr+1,prev,dp);

      dp[curr][prev+1] =  max(inc,exc);
      return dp[curr][prev+1];

    }

    // RECURSION
     
    // int lis(vector<int>&nums,int curr,int prev){
    //     int n = nums.size();
    //     if(curr>=n)return 0;
    //     int inc;
    //     int exc;
    //     if(prev==-1 ||nums[prev]<nums[curr])
    //       inc = 1+lis(nums,curr+1,curr);
   
    //      exc = 0+lis(nums,curr+1,prev);

    //     return max(inc,exc);

    // }
    int lengthOfLIS(vector<int>& nums) {
       
       // time complexity:- O(n^2)

        // int n = nums.size();
        // vector<int>lis(n);
        // lis[0] = 1;
        // int maxi =0;
        // for(int i = 1;i<n;i++){
        //     lis[i]=1;
        //     for(int j = 0;j<i;j++){
        //         if(nums[i]>nums[j]){
        //          lis[i]=max(lis[i],lis[j]+1);
        //         }
        //     }
        // }
        // for(int i =0;i<n;i++){
        //     maxi = max(lis[i],maxi);
        // }
        // return maxi;

        //  return lis(nums,0,-1);
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return lisMem(nums,0,-1,dp);

    }
};