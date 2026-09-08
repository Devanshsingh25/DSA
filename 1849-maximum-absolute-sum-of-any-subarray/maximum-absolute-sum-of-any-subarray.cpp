class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        // int maxi = 0;
        // int sum = 0;
        // int n = nums.size();
        // for(int i  =0;i<n;i++){
        //     sum = nums[i];
        //     for(int j =i+1;j<n;j++){
        //         maxi = max(maxi,abs(sum));
        //     sum+=nums[j];
        //     }
        //     maxi = max(maxi,abs(sum));
        // }
         
        // return maxi;

       //normal kadane's algorithm

       int count =0;
       int maxi = INT_MIN;
       for(int i =0;i<nums.size();i++){
          count += nums[i];
          maxi = max(count,maxi);
          if(count<0)
          count = 0; 
       }

       int countmin = 0;
       int mini = INT_MAX;
       for(int i =0;i<nums.size();i++ ){
        countmin+=nums[i];
        mini = min(countmin,mini);
        if(countmin>0)
        countmin = 0;
       }
        
    int maximum = max(maxi,abs(mini));
    return maximum;
     
    }
};

 