class Solution {
public:

    int solveRecMem(vector<int>&arr,int curr,int prev,vector<vector<int>>&dp){
    //     int n = nums.size();
    //     if(curr>=n)return 0;
    //     if(dp[curr][prev+1]!=-1){
    //        return dp[curr][prev+1];
    //     }
    //     int inc;
    //     int exc;
    //     if(prev==-1 ||nums[prev]<nums[curr])
    //       inc = 1+lisMem(nums,curr+1,curr,dp);
   
    //      exc = 0+lisMem(nums,curr+1,prev,dp);

    //   dp[curr][prev+1] =  max(inc,exc);
    //   return dp[curr][prev+1];

     if(curr >= arr.size())  

        { 

            return 0; 

        } 

 

        //step3: base case k baad, check if ans already exist in dp or not 

        if(dp[curr][prev+1] != -1)  

        { 

            return dp[curr][prev+1]; 

        } 

 

        //step2: store and return the dp array 

        int inc = 0; 

        if(prev == -1 || arr[curr] > arr[prev])  

        { 

            inc = 1 + solveRecMem(arr, curr+1, curr, dp); 

        } 

 

        int exc = 0 + solveRecMem(arr, curr+1, prev, dp); 

 

        dp[curr][prev+1] = max(inc, exc); 

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
        return solveRecMem(nums,0,-1,dp);

    }
};