class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        n = n-k;
        // for(int i =0;i<=n;i++){
        //     if(i==n) return a[i];
        // }
        return nums[n];
    }
};