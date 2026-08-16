class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int mini = -1;
        int res = 0;
        for(int i =0;i<n-1;i++){
            
            for(int j = i+1;j<n;j++){
                res = 0;
                if(i<j && nums[i]<nums[j]){
                res = nums[j]-nums[i];
                mini = max(res,mini);
                }
            }
        }

        return mini;
        
    }
};