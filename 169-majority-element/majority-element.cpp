class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //  int cnt = 0;
    //  int el;
    //  int n =nums.size();
    //  for(int i = 0;i<n;i++){
    //     if(cnt == 0){
    //         cnt =1;
    //         el = nums[i];
    //     }
    //     else if (nums[i] == el){
    //         cnt++;
    //     }
    //     else{
    //         cnt--;
    //     }

    //  }
    //  int cnt1 = 0;
    //  for(int i = 0;i<n;i++){
    //     if(nums[i] == el){
    //         cnt1++;
    //     }

    //  }
    //  if(cnt1>n/2){
    //     return el;
    //  }
    //  return -1;



    //boyer moore counting algorithm;
         
        int res = 0;
        int count = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[res]==nums[i]){
                count++;
            }
            else{
                count--;
            }

            
             if(count<=0){
                res = i;
                count = 1;
            }
        }
            int n = 0;
        if(count>0){
            for(int i =0;i<nums.size();i++){
                if(nums[i]==nums[res])
                n++;
            }
        }
        if(n>nums.size()/3){
            return nums[res];
        }

        return -1;



    }
};