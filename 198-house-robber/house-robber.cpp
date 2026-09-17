class Solution {
public:
    // int houserob(vector<int>&nums,int idx,vector<int>&dp){
    //     int n =  nums.size();
    //     if(idx>=n)return 0;
    //     if(dp[idx]!=-1){
    //         return dp[idx];
    //     }
    //     int include = nums[idx]+houserob(nums,idx+2,dp);
    //     int exclude  = 0+houserob(nums,idx+1,dp);
    //     dp[idx] = max(include,exclude);
    //     return dp[idx];
    // }

    int tabulation(vector<int>&nums,int idx){
        int n = nums.size();
            vector<int>v(nums.size()+2);
            v[n]=0;
            v[n+1]=0;
            for(int i =n-1;i>=0;i--){
               int include = nums[i]+v[i+2];
               int exclude  = 0+v[i+1];
              v[i] = max(include,exclude);
            }
            return v[0];
    }

    int rob(vector<int>& nums) {
        // return houserob(nums,0);
        // vector<int>dp(nums.size()+1,-1);
        // return houserob(nums,0,dp);
        return tabulation(nums,0);
    }
};