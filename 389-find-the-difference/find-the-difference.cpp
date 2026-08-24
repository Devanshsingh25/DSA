class Solution {
public:
    char findTheDifference(string s, string t) {
    //     string res = s+t;
    //      char ch = res[0];
    //     for(int i =1;i<(int)res.size();i++){
    //        ch = ch^res[i];
    //     }
    //    return ch;
          
          for(int i =0;i<s.size();i++){
            t[i+1]= t[i+1]+t[i]-s[i];
          }
          return t[t.size()-1];
        
    }
};