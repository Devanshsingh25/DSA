class Solution {
public:
      int setbits(int i){
        int count= 0;
        while(i){
           i = i&(i-1);
           count++;
        }
        return count;
      }
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        for(int i =0;i<=n;i++){
            v[i]= setbits(i);
        }
        return v;
    }
};