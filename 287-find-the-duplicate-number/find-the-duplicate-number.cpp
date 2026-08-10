class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i =0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]) return nums[i];
        // }
        // return -1;
        vector<int>v(nums.size());
        int dupli;
        for(int i =0;i<nums.size();i++){
            v[nums[i]] = v[nums[i]] +1; 

        }
        for(int i  =0;i<v.size();i++){
            if(v[i]>1) dupli = i;
        }

        return dupli;


    }
};