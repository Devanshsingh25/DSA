class Solution {
public:
    string removeDuplicates(string s) {
    //     stack<char>st;
    //     string res="";
    //     int count =0;
    //     for(int i =0;i<s.size();i++){
    //         if(st.empty())
    //         {
    //             st.push(s[i]);
    //             count++;
    //         }
    //         else if(st.top()==s[i])
    //         {
    //         st.pop();
    //         count--;
    //         }
    //         else {
    //         st.push(s[i]);
    //          count++;
    //         }
    //     }

    //     for(int i =0;i<count;i++){
    //         res = res+st.top();
    //         st.pop();
    //     }

    //     reverse(res.begin(),res.end());
    //    return res;


           vector<char>v;
           string res="";
           for(int i =0;i<s.size();i++){
                if(res.size()==0)res.push_back(s[i]);
                else if(res[res.size()-1]==s[i])res.pop_back();
                else
                res.push_back(s[i]);
           }
        //    for(int i =0;i<res.size();i++){
        //     res = res+v[i];
        //    }
          return res;
    }
};