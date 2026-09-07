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
        
        //too complicated and naive solution need to optimize it

        //  int n  =nums.size();
        //  for(int i =0;i<n;i++){
        //     int j = i+1;
        //     if(nums[i]==0){
        //     while(j<n){
        //         if(nums[j]!=0){
        //             swap(nums[i],nums[j]);
        //             break;
        //         }
        //         else{
        //              j++;
        //         }
        //     }
        //  }
        //  }

       int count = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[count]==0 && nums[i]!=0){
                swap(nums[count],nums[i]);
                count++;
            }
            else if(nums[count]!=0){
                count++;
            }
        }

    }
};