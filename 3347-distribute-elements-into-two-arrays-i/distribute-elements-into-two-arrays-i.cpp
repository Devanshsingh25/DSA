class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int>arr1;
        vector<int>arr2;
        // vector<int>res;
   
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int idx = 2;
        int n = nums.size();
        while(idx<n){
            int size1 = arr1.size()-1;
            int size2 = arr2.size()-1;
            if(arr1[size1]>arr2[size2])
             arr1.push_back(nums[idx]);
             else
             arr2.push_back(nums[idx]);

             idx++;
        }
       
    //    for(int i =0;i<arr1.size();i++){
    //         res.push_back(arr1[i]);
    //    }

    //    for(int i  =0;i<arr2.size();i++){
    //     res.push_back(arr2[i]);
    //    }


       for(int i =0;i<arr2.size();i++){
        arr1.push_back(arr2[i]);
       }

       return arr1;

    }
};