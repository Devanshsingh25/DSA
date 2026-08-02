class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        // int low = 0;
        // int high = (n*m)-1;
        // int mid;
        // while(low<=high){
        //     mid = low + (high-low)/2;
        //     if(matrix[mid/m][mid%m]==target)
        //     return true;
        //     else if(matrix[mid/m][mid%m]<target)low = mid+1;
        //     else high = mid-1;
        // }

        // return false;
        
        int row = 0;
        int col = m-1;
        while(row<n && col>=0){
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target)row++;
            else col--;
        }
        return false;

    }
};