class Solution {
public:
     bool palindrome(string s,int i,int j){
            while(i<=j){
                if(s[i]!=s[j])
                return false;
                else{
                    i++;
                    j--;
                }
            }
            return true;
     }


    bool validPalindrome(string s) {
        int n = s.size();
        int i =0;
        int j = n-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else 
            break;

        }

        bool ans1 = palindrome(s,i+1,j);
        bool ans2 = palindrome(s,i,j-1);
        return ans1 || ans2;

        
    }
};