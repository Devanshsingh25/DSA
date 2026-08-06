class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target)return true;
        // }
        // return false;

        sort(nums.begin(),nums.end());

        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid  = low + (high - low)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>target) high = mid-1;
            else 
            low = mid+1;
        }

        return false;
        
    }
};