class Solution {
public:
    int characterReplacement(string s, int k) {
        int j = 0;
        // int len =0;
        int maxlen = 0;
        int n = s.size();
        int maxfreq = 0;
        int size = 0;
        vector<int>freq(26);
        for(int i =0;i<n;i++){
        

            //calculating frequency
           freq[s[i]-'A']++;

           //calculating max-frequency
      maxfreq = max(maxfreq,freq[s[i]-'A']);

        //calculating replacement
        //  size = i-j+1;
        while(i-j+1-maxfreq>k){
           
            freq[s[j]-'A']--;
            j++;

        
        }
        maxlen = max(maxlen,i-j+1);

        }    

        return maxlen;

    }
};


// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int j = 0;
//         int maxlen = 0;
//         int n = s.size();
//         int maxfreq = 0;

//         vector<int> freq(26, 0);

//         for (int i = 0; i < n; i++) {

//             // Calculate frequency
//             freq[s[i] - 'A']++;

//             // Calculate maximum frequency
//             maxfreq = max(maxfreq, freq[s[i] - 'A']);

//             // Shrink window if replacements are more than k
//             while ((i - j + 1) - maxfreq > k) {
//                 freq[s[j] - 'A']--;
//                 j++;
//             }

//             // Calculate maximum length
//             maxlen = max(maxlen, i - j + 1);
//         }

//         return maxlen;
//     }
// };