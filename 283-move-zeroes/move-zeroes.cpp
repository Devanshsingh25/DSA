class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //    int  j = -1;
    //     int temp;
    //     int n = nums.size();
    //     for(int i = 0;i<n;i++){
    //         if(nums[i]==0){
    //             j = i;
    //             break;
    //         }
    //     }

    //     if(j==-1){
    //         return;
    //     }

    //     for(int i = j+1;i<n;i++){
    //         if(nums[i]!=0){
    //            temp = nums[i];
    //            nums[i] = nums[j];
    //            nums[j] = temp;
    //            j++;
    //         }
    //     }
        
         int n  =nums.size();
         for(int i =0;i<n;i++){
            int j = i+1;
            if(nums[i]==0){
            while(j<n){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    break;
                }
                else{
                     j++;
                }
            }
         }
         }

    }
};