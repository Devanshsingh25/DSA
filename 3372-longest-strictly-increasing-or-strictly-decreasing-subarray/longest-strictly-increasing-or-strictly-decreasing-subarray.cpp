class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int countinc = 1;
        int countdec  =1 ;
        int maxi = 0;
        int maximum = 1;
        for(int i =1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                countinc++;
                countdec =1;
            }
            else if(nums[i-1]>nums[i]){
                countdec++;
                countinc =1;
            }
            else{
                countdec = 1;
                countinc =1;
            }

            maxi = max(countinc,countdec);
            maximum = max(maxi,maximum);
        }
        return maximum;
    }
};