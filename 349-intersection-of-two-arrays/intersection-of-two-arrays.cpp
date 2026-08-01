// class Solution {
// public:
//     vector<int> copyvector(vector<int>&v){
//         vector<int>v1;
//         for(int i = 0;i<v.size()-1;i++){
//             if(v[i]!=v[i+1]){
//               v1.push_back(v[i]);  
//             }
//         }
       
//             v1.push_back(v[v.size()-1]);
//         return v1;
//     }

//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         vector<int>v1 = copyvector(nums1);
//         vector<int>v2 = copyvector(nums2);
//         vector<int>v3;
//         for(int i = 0;i<v1.size();i++){
//             for(int j=0;j<v2.size();j++){
//                 if(v1[i]==v2[j]){
//                     v3.push_back(v1[i]);
//                 }
//             }
//         }

//         return v3;
     
        
//     }
// };



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};