class Solution {
public:
    bool isPalindrome(string s) {
        string k;

        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                k.push_back(tolower(s[i]));
            }
        }

        int m = k.size();

        for(int i = 0; i < m / 2; i++) {
            if(k[i] != k[m - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};