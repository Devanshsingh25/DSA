class Solution {
public:
    void sortColors(vector<int>& nums) {
        // vector<int>temp1;
        // vector<int>temp2;
        // vector<int>temp3;
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         temp1.push_back(nums[i]);
        //     }
        //     else if(nums[i]==1){
        //         temp2.push_back(nums[i]);
        //     }
        //     else{
        //         temp3.push_back(nums[i]);
        //     }
        // }
        //  nums.clear();
        // nums.insert(nums.end(),temp1.begin(),temp1.end());
        // nums.insert(nums.end(),temp2.begin(),temp2.end());
        // nums.insert(nums.end(),temp3.begin(),temp3.end());

        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }

            else if(nums[mid]==1)
            mid++;

            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
  
    }
};