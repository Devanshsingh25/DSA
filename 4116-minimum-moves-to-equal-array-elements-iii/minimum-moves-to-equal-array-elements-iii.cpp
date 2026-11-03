class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0;
        for(int i =0; i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }

        int diff =0;
        for(int i =0;i<nums.size();i++){
            diff += maxi-nums[i];
        }

        return diff;
    }
};