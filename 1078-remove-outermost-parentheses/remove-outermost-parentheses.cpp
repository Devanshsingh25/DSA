class Solution {
public:
    string removeOuterParentheses(string s) {
        // vector<string>v;
        string result;
        int n = s.size();
        int count=0;
       for(int i = 0;i<n;i++){
          if(s[i]=='('){
            count++;
            if(count>1){
            //   v.push_back("(");
            // result = result+"(";
            result.push_back('(');
            }
          }
          else{
            count--;
            if(count>0){
                // v.push_back(")");
                // result = result+")";
                result.push_back(')');
            }
          }
       }
    //    for(int i=0;i<v.size();i++){
    //       result = result+v[i];
    //    }
       return result;

        
    }
};