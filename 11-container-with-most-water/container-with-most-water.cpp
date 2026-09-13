class Solution {
public:
    int maxArea(vector<int>& height) {
        // int n = height.size();
        // vector<int>v(n);
        // vector<int>k(n);
        // v[0]=0;
        // k[0]=0;
        // int maxi  =0;
        // int area = 0;
        // int maxarea=0;
        // int maxindi = -1;
        // for(int i =1;i<n;i++){
        //     if(height[i-1]>maxi){
        //     maxi= height[i-1];
        //     maxindi = i-1;
        //     }
        //     v[i] =maxi;
        //     k[i]=maxindi;
        // }
        
    //     int length;
    //     int breadth;
    //     for(int i =0;i<n;i++){
    //       length = min(height[i],v[i]);
    //       breadth = (i-k[i]);
    //       area = length*breadth;
    //       maxarea = max(area,maxarea);
    //     }
    //    return maxarea; 

    //    int n = height.size();
    //    int area= 0;
    //    int length;
    //    int breadth;
    //    int maxarea =0;
    //    for(int i =0;i<n-1;i++){
    //     for(int j =i+1;j<n;j++){
    //         length = min(height[i],height[j]);
    //         breadth = j-i;
    //         area = length*breadth;
    //         maxarea = max(maxarea,area);
    //     }
    //    }

    //    return maxarea;
          int left=0;
          int right = height.size()-1;
          int maxarea = 0;
          int area = 0;
          while(left<right){
            area = min(height[left],height[right])*(right-left);
            maxarea = max(area,maxarea);
            if(height[left]<height[right]){
                left++;
            }
            else
            right--;
          }

        return maxarea;
    }
};