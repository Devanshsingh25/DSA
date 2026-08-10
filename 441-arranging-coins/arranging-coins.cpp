class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        long long sum =0;
     for(long long i = 1;i<=n;i++){
             sum =sum+i;

        if(sum>n)return i-1;
        else if(sum==n)return i;
     


     }
      
      return 0;
        
    }
};