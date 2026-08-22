class Solution {
public:
    bool checkDivisibility(int n) {
        int k  =n;
        int m = n;
        int plus =  0;
        int product = 1;
        while(k){
          
            plus+= (k%10);
            k = k/10;
        }

        while(m){
          
            product = product*(m%10);
            m = m/10;
        }

    plus = plus+product;
    if(n%plus==0)
    return true;
    
     return false;
        
    }
};