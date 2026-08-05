class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        if(x>1 && x<2) return 1;

        long long i =0;
        while((i*i)<x){
          
            i++;


        }
          if(i*i==x) return i;
          else
        return i-1;
        
        
    }
};