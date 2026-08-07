class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[0];
        int min = nums[0];
        
         for(int i = 0;i<nums.size();i++){
              if(min>nums[i]) min = nums[i];

              
         }
         return min;

    }
};