class Solution {
public:
    int maxPower(string s) {
        int maxi  = 1;
        int result = 0;
        if(s.size()==1)return 1;
        for(int i =0;i<s.size()-1;i++){
            if(s[i]==s[i+1])maxi++;
            else maxi = 1;
            result = max(result,maxi);
        }

        return result;

        
    }
};