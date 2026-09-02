class Solution {
public:

               int expand(string s,int i,int j){
               int n = s.size();
              
               while(i>=0 && j<n && s[i]==s[j]){
              
                i--;
                j++;
              

               } 

               return j-i-1;          

           }



    string longestPalindrome(string s) {
        // int start = 0, maxLen = 1;
        // int n = s.size();

        // for (int i = 0; i < n; i++) {
        //     // Odd length palindrome
        //     int left = i, right = i;
        //     while (left >= 0 && right < n && s[left] == s[right]) {
        //         if (right - left + 1 > maxLen) {
        //             maxLen = right - left + 1;
        //             start = left;
        //         }
        //         left--;
        //         right++;
        //     }

        //     // Even length palindrome
        //     left = i;
        //     right = i + 1;
        //     while (left >= 0 && right < n && s[left] == s[right]) {
        //         if (right - left + 1 > maxLen) {
        //             maxLen = right - left + 1;
        //             start = left;
        //         }
        //         left--;
        //         right++;
        //     }
        // }

        // return s.substr(start, maxLen);

          int start =0;
          int maxlen  = 1;
         for(int i =0;i<s.size();i++){
            int j = i;
            int len1 = expand(s,i,j);
            j = i+1;
            int len2 = expand(s,i,j);
            int len = max(len1,len2);

            if(len>maxlen){
                start = i-(len-1)/2;
                maxlen = len;
            }
         }

         return s.substr(start,maxlen);


    }
};