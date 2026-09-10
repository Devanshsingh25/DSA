class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int maxi = INT_MIN;
        int count = 0;
        for(int j =0;j<nums.size();j++){
            if(nums[j]==1)
            count++;
            while((count+k)<(j-i+1)){
                if(nums[i]==1){
                    count--;
                }
                i++;
            }

            maxi = max(j-i+1,maxi);
        }
        return maxi;
    }
};