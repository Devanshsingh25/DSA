class Solution {
public:
    int trap(vector<int>& height) {
        // int n  =height.size();
        // int result = 0;
        // for(int i =0;i<n;i++){
        //     int leftmax = 0;
        //     for(int j =0;j<=i;j++){
        //         leftmax = max(leftmax,height[j]);
        //     }
        //     int rightmax = 0;
        //     for(int j =i;j<n;j++){
        //         rightmax = max(rightmax,height[j]);
        //     }

        //      result = result + (min(leftmax,rightmax)-height[i]);

        // }
        // return result;

        int n = height.size();
        int result = 0;
        int leftmax[n];
        int rightmax[n];
        leftmax[0] = height[0];
        for(int i =1;i<n;i++){
            leftmax[i] = max(height[i],leftmax[i-1]);

        }

        rightmax[n-1] = height[n-1];
        for(int i  =n-2; i>=0;i--){
           rightmax[i] = max(height[i],rightmax[i+1]);
        }

        for(int i  =0;i<n;i++){
            result  = result+ (min(leftmax[i],rightmax[i])-height[i]);
        }

        return result;
    }
};