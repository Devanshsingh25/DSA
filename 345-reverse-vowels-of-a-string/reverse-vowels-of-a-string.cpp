class Solution {
public:

    bool isvowel(char c){
    
    return c=='A' || c=='E' || c=='I' || c=='O' ||
           c=='U' || c=='a' || c=='e' || c=='i' ||
           c=='o' || c=='u';
    }

    string reverseVowels(string s) {
        int n = s.size();
        int low = 0;
        int high = n-1;
        while(low<high){
              if(isvowel(s[low]) && isvowel(s[high])){
                swap(s[low],s[high]);
                low++;
                high--;
              }
             else if(!isvowel(s[low]))
             low++;

             else 
             high--;

        }
       return s;
        
    }
};