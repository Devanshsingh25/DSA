class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        if(n==2)return "11";
        string res="11";
        // int count = 1;
        for(int i =3;i<=n;i++){
            string t = "";
            res = res+'&';
            int count = 1;
            for(int j = 1;j<res.size();j++){
                if(res[j-1]!=res[j]){
                    t= t+to_string(count)+res[j-1];
                    count = 1;
                }
                else 
                count++;
            }
            res =t;
        }
        return res;
    }
};