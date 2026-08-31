class Solution {

public:
    int expand(string s,int i,int j){
       
       int count = 0;
       while(i>=0 && j<s.size()&&s[i]==s[j]){
            count++;
            i--;
            j++;
       }

       return count;

    }

    int countSubstrings(string s) {
        int  i = 0;
        int totalcount = 0;
        for(int i =0;i<s.size();i++){
        //   int j =i;
          int countodd = expand(s,i,i);
        //    j = i+1;
          int counteven = expand(s,i,i+1);
          totalcount = totalcount+counteven+countodd;


        }

        return totalcount;
        
    }
};