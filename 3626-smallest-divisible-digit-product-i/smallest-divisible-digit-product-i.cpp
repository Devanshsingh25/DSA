class Solution {
public:
    int smallestNumber(int n, int t) {
        if(n<t) return t;
        for(int i = n;i<=109;i++){
              if(n<10){
                int s = i;
                s = s%10;
                if(s%t==0)return i;
              }

              else if(n>9 && n<100){
                int s = i;
                int m;
                int k;
                m = s%10;
                s = s/10;
                k = s%10;
                if((m*k)%t==0)return i;
              }

              else if(n>99 && n<110){

                  int s = i;
                int m;
                int k;
                int f;
                m = s%10;
                s = s/10;
                k = s%10;
                s = s/10;
                f = f%10;
                if((m*k*f)%t==0)return i;

              }

          
    }

    return -1;
    };
};