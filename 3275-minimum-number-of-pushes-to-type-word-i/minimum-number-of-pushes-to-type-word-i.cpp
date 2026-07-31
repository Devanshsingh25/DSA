class Solution {
public:
    int minimumPushes(string word) {
        int min = 8;
     int   n = word.size();
        if(n<8)return n;
        n=n-8;
        for(int i = 0;i<8;i++){
         if(n!=0){
        min+=2;
        n--;
         }
        
        else{
            return min;
        }
        }
     
        for(int i = 0;i<8;i++){
         if(n!=0){
        min+=3;
        n--;
         }
        else{
            return min;
        }
        }
        if(n!=0){
        min+=4;
        n--;
        }
        if(n!=0)
        min+=4;

        return min;
        
    }
};