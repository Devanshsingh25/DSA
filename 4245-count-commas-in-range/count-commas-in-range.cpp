class Solution {
public:
    int countCommas(int n) {
    //     if(n==0)return 0;
    //     string str  =to_string(n);
    //     int count= str.size();
    //     if(count%3!=0){
    //         return count/3;
    //     }
    //     else
    //     return count/3-1;

    //     return 0;
    // }

       if(n>=1000){
        return n-1000+1;
       }
      
       return 0;
    }
};