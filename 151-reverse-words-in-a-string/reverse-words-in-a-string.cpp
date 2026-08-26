class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        int i = 0,n=s.length();
        while(i<n){
            while(i<n && s[i]==' ')i++;
            string word = "";
            while(i<n && s[i]!=' '){
              word = word+s[i];
              i++;  
            }
            if(!word.empty()){
            words.push_back(word);
        }
        }

        reverse(words.begin(),words.end());

        string result="";
        for(int j =0;j<words.size();j++){
            result = result+words[j];
            if(j!=words.size()-1)
            result = result + ' ';
        }

        return result;
    }
        
    //     int j = 0;
    //     int n = s.size();
    //     for(int i =0;i<=n;i++){
    //         if(s[i]== ' ' || i==n){
    //           reverse(s.begin()+j,s.begin()+i);
    //             j = i+1;
    //         }

    //     }
    //   reverse(s.begin(),s.end());
    
    //   for(int i =1;i<n;i++){

    //     if(s[i]==' ' && s[i-1]=' ')
    //         s[i]='';
    //   }
    //   if(s[0]==' ')s[0]='';
    //   if(s[n-1]==' ')s[n-1]='';
    //    return s;
       
    // }
};