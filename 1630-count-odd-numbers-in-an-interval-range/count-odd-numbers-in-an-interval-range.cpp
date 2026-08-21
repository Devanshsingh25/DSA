class Solution {
public:
    int countOdds(int low, int high) {
        if(high==low && high%2!=0) return 1;
        if(low%2==0 && high%2==0)
         return (high-low)/2;

         else if(low%2==0 && high%2!=0 || low%2!=0 && high%2==0)
         return 1+(high-low-1)/2;

         else 
         return 2+((high-1)-(low+1))/2;

       return 0; 
    }
};