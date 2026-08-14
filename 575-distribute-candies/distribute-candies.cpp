class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int res = 0;
        int count = 1;
        int n = candyType.size();
        sort(candyType.begin(),candyType.end());
        for(int i =1;i<n;i++){
            if(candyType[res]!=candyType[i]){
            count++;
            res = i;
            }
        }

        if(count>n/2) return n/2;
        else
        return count;
        
    }
};