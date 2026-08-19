class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n  =nums1.size();
        int m = nums2.size();
        vector<int>v;
        for(int i = 0;i<n;i++){
            v.push_back(nums1[i]);
        }
        for(int i  =0;i<m;i++){
            v.push_back(nums2[i]);
        }

        // float k = 0;
        // for(int i  =0;i<v.size();i++){
        //     k += v[i]; 
        // }
        sort(v.begin(),v.end());

       int d = (n+m);
       float res = 0;
       if(d%2!=0){
           return v[d/2];
       }
       else
         res  = v[d/2]+v[d/2-1];
         return res/2;
        
    }
};