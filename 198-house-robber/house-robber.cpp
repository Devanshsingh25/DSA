class Solution {
public:
    // int houserob(vector<int>&nums,int idx){
    //     if(idx>=nums.size()){
    //         return 0;
    //     }

    //     int include = nums[idx]+houserob(nums,idx+2);
    //     int exclude = 0+houserob(nums,idx+1);
    //     return max(include,exclude);
    // }


     int memo(vector<int>&nums,int idx,vector<int>&dp){
        if(idx>=nums.size()){
            return 0;
        }

        if(dp[idx]!=-1){
            return dp[idx];

        }

        int include = nums[idx]+memo(nums,idx+2,dp);
        int exclude = 0+memo(nums,idx+1,dp);
        dp[idx]= max(include,exclude);
        return dp[idx];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
    //    return houserob(nums,0);
          vector<int>dp(n,-1);
          return memo(nums,0,dp);

    }
};