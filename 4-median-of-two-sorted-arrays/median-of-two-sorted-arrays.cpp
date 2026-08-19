class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    //     int n  =nums1.size();
    //     int m = nums2.size();
    //     vector<int>v;
    //     for(int i = 0;i<n;i++){
    //         v.push_back(nums1[i]);
    //     }
    //     for(int i  =0;i<m;i++){
    //         v.push_back(nums2[i]);
    //     }

        
    //     sort(v.begin(),v.end());

    //    int d = (n+m);
    //    float res = 0;
    //    if(d%2!=0){
    //        return v[d/2];
    //    }
    //    else
    //      res  = v[d/2]+v[d/2-1];
    //      return res/2;

if (nums1.size() > nums2.size())
    return findMedianSortedArrays(nums2, nums1);

         int n1 = nums1.size();
         int n2 = nums2.size();
         int begin = 0;
         int end = n1;
         while(begin<=end){
            int i1  = (begin+end)/2;
            int i2 = (n1+n2+1)/2-i1;
            int min1 = (i1==n1)? INT_MAX:nums1[i1];
            int max1  = (i1==0)? INT_MIN:nums1[i1-1];
            int min2 = (i2==n2)? INT_MAX : nums2[i2];
            int max2 = (i2==0)? INT_MIN : nums2[i2-1];
            if(min1>=max2 && min2>=max1){
                if((n1+n2)%2==0) return (double) (max(max1,max2)+min(min1,min2))/2.0;
                else
                return (double) max(max1,max2);
            }

            else if(min1<max2)
            begin  = i1+1;
            else if(min2<max1)
            end = i1-1;
         }
        return 0.0;
    }
};