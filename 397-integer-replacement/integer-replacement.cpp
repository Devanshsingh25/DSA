class Solution {
public:
    int integerReplacement(int n) {
        // int count = 0;
        // while(n!=1){
        //     count++;
        //     if(n%2==0)
        //     n = n/2;
        //     else
        //     n = n-1;
        // }
        // return count;
        
        long long tn = n;
        int count = 0;
        while(tn>1){
            if(tn==3)tn--;
       
            else if(tn%2==0)
             tn = tn/2;
            else if(tn%4==1)tn--;
            else 
            tn++;
            count++;
        }

    return count;
    }

};