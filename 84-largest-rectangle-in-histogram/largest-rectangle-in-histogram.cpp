class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
       stack<int>st;
       vector<int>nse(n);
       vector<int>pse(n);
       for(int i =0;i<n;i++){
         
            
                while(!st.empty() && heights[st.top()]>heights[i]){
                      nse[st.top()] = i;
                      st.pop();
                }
            
             st.push(i);


       }  

       while(!st.empty()){
            nse[st.top()] = n;
            st.pop();
       }


       for(int i =n-1;i>=0;i--){
          
            
                while(!st.empty() && heights[st.top()]>heights[i]){
                      pse[st.top()] = i;
                      st.pop();
                }
            
             st.push(i);


       }

       while(!st.empty()){
        pse[st.top()] = -1;
        st.pop();
       }


       int ans =0;
       for(int i = 0;i<n;i++){
        ans = max(ans,heights[i]*(nse[i]-pse[i]-1));

       } 

       return ans;
    }
};