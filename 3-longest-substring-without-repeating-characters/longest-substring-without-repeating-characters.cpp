class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_map<char, int> mp;

        // int left = 0;
        // int maxLen = 0;

        // for (int right = 0; right < s.length(); right++) {

        //     if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
        //         left = mp[s[right]] + 1;
        //     }

        //     mp[s[right]] = right;

        //     maxLen = max(maxLen, right - left + 1);
        // }

        // return maxLen;

        int n = s.size();
        int res = 0;
        for(int i =0;i<n;i++){
            vector<bool>visited(256);
            for(int j =i;j<n;j++){
                if(visited[s[j]]==true){
                    break;
                }
                else{
                    res = max(res,j-i+1);
                    visited[s[j]] = true;
                }
            }
        }

        return res;
         

    }
};