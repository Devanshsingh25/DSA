class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res = "";
        int n = s.size();
        // st.push(s[0]);
        for(int i  =0;i<n;i++){
            if(st.empty())
            st.push(s[i]);
            else {
            if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        }
        
        while(!st.empty()){
            res = res+st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};