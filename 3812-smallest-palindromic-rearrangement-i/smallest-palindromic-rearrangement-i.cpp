class Solution {
public:
        

      
    //     void swap(string &s,int a,int b)
    //     {
    //         char temp;
    //         temp = s[a];
    //          s[a] = s[b];
    //         s[b] = temp;
    //     }
    string smallestPalindrome(string s) {

        int n = s.size();
        n = n/2;
        int k = s.size()-1;
           
           sort(s.begin(),s.begin()+n);
           for(int i = 0;i<n;i++){
            s[k] = s[i];
            k--;
           }

        
    //     int n = s.size();
    //     int first = 0;
    //     int second = 1;
    //     int third = n-2;
    //     int fourth = n-1;
    //     for(int j = first;j<=n/2;j++){
    //     for(int i = second;i<=n/2;i++){
            
    //         if(s[first]>s[second] && second<third){
    //             swap(s,first,second);
    //             swap(s,third,fourth);
    //             first++;
    //             second++;
    //             third--;
    //             fourth--;
               
    //         }
    //         else{

    //             second++;
    //             third--;
    //         }
    //     }
    //             first++
    //             second = first+1;
    //             fourth--;
    //             third = fourth-1;
               
    //     }

        return s;
        
    }
};