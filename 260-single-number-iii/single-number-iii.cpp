class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int n = nums.size();
        if(nums[0]!=nums[1])v.push_back(nums[0]);
        if(nums[n-1]!=nums[n-2])v.push_back(nums[n-1]);
        for(int i = 1;i<n-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1])
             v.push_back(nums[i]);
        }
        return v;
    }
};