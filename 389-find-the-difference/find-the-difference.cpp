class Solution {
public:
    char findTheDifference(string s, string t) {
        string res = s+t;
         char ch = res[0];
        for(int i =1;i<(int)res.size();i++){
           ch = ch^res[i];
        }
       return ch;
        
    }
};