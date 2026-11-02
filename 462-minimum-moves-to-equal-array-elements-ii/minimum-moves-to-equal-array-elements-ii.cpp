class Solution {
public:
    int minMoves2(vector<int>& nums) {
       
        int n=  nums.size();
        long long diff = 0;
        long long res = INT_MAX;
        for(int i = 0;i<n;i++){
            diff=0;
            for(int j =0;j<n;j++){
                if(i!=j){
                    diff += abs(nums[i]-nums[j]);
                }
            }

            res = min(diff,res);
        }

        return res;
    }
};