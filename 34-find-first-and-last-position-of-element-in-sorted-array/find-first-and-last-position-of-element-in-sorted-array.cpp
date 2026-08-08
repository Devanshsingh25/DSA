class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int>v;
        // for(int i=0;i<nums.size();i++){
        //     if(v.size()==0 && nums[i]==target) v.push_back(i);
        //     else if(nums[i]==target && nums[i]!=nums[i+1])
        //     v.push_back(i);
        // }

        // if(v.size()==0){
        //     v.push_back(-1);
        //     v.push_back(-1);
        // }

        // return v;


        int first = -1;
        int last = -1;

        int n = nums.size();

        int low = 0;
        int high = n-1;

        while(low<=high){
        int   mid = low + (high - low)/2;

           if(nums[mid]==target){
               first = mid;
               high = mid-1;
           }

           else if(nums[mid]>target) high = mid-1;
           else low = mid+1;


        }

        low = 0;
        high = n-1;

        while(low<=high){
          int mid = low + (high - low)/2;

           if(nums[mid]==target){
               last = mid;
               low = mid+1;
           }

           else if(nums[mid]>target) high = mid-1;
           else low = mid+1;


        }

        return {first,last};

        
    }
};