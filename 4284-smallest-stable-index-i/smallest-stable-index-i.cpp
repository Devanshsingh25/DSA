class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = nums[0];
        int n = nums.size();
       
        for(int i =0;i<n;i++){
             int mini= INT_MAX;
            if(nums[i]>maxi)
              maxi  =nums[i];
              for(int j = i;j<n;j++){
                 mini = min(mini,nums[j]);
              }

              if(maxi-mini<=k)
              return i;
        }

        return -1;
    }
};