class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res="";
        int count =0;
        for(int i =0;i<s.size();i++){
            if(st.empty())
            {
                st.push(s[i]);
                count++;
            }
            else if(st.top()==s[i])
            {
            st.pop();
            count--;
            }
            else {
            st.push(s[i]);
             count++;
            }
        }

        for(int i =0;i<count;i++){
            res = res+st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());
       return res;


    }
};