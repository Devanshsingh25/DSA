class Solution {
public:
    int houserob(vector<int>&nums,int idx,vector<int>&dp){
        int n =  nums.size();
        if(idx>=n)return 0;
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int include = nums[idx]+houserob(nums,idx+2,dp);
        int exclude  = 0+houserob(nums,idx+1,dp);
        dp[idx] = max(include,exclude);
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        // return houserob(nums,0);
        vector<int>dp(nums.size()+1,-1);
        return houserob(nums,0,dp);
    }
};