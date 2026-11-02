class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();
        // vector<int>v;
        // vector<int>c;
        // for(int i = 0;i<n;i++){
        //     v.push_back(gas[i]);
        // }

        // for(int i =0;i<n;i++){
        //     v.push_back(gas[i]);
        // }

        //  for(int i = 0;i<n;i++){
        //     c.push_back(cost[i]);
        // }

        // for(int i =0;i<n;i++){
        //     c.push_back(cost[i]);
        // }

        // for(int i =0;i<n;i++){
        //     int gas = v[i];
        //     for(int j =0;j<n;j++){
        //        gas-=c[j+i];
        //        if(gas<0){
        //         break;
        //        }

        //        gas+= v[j+i+1];
        //     }
        //     if(gas>=0){
        //         return i;
        //     }
          
        // }

        // return -1;

        int start = 0;
        int curr = 0;
        int prev =0;
        int n = gas.size();
        for(int i  =0;i<n;i++){
            curr += gas[i]-cost[i];
            if(curr<0){
                start = i+1;
                prev+= curr;
                curr=0;
            }
        }
        return (curr+prev>=0)?(start):-1;


    }
};