class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maximum = 0;
        int count = 0;
        sort(nums.begin(),nums.end());
        if(nums.size()<2)return 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
            count = nums[i]-nums[i+1];
            else{
                count = nums[i+1] - nums[i];
            }
            maximum = max(count,maximum);
        }
        return maximum;
        
    }
};