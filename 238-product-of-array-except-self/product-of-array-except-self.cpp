class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);
        vector<int>post(n);
        vector<int>result(n);
      int  product = 1;
        pre[0]=1;
        for(int i=1;i<n;i++){
            product*=nums[i-1];
            pre[i]=product;
        }
        product =1;
        post[n-1]=1;
        for(int i =n-2;i>=0;i--){
            product*=nums[i+1];
            post[i]=product;
        }
        for(int i =0;i<n;i++){
            result[i] = pre[i]*post[i];
        }
      return  result;
    }
};