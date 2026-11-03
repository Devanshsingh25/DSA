class Solution {
public:
    int reverse(int x) {
         long long k  =x;
         long long m = 0;
         while(k){
         
        

          if(m>INT_MAX/10 || m==INT_MAX)
             return 0;

             if(m<INT_MIN/10 || m==INT_MIN)
             return 0;


           m = m*10 + k%10;
            k = k/10;
         }

        //  if(x<0){
        //     // m = -m;
        //     return -m;
        //  }
         return m;
    }
};