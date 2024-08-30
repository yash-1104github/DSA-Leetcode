class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int sum1 = 0 , sum2 = 0;
        for(int i = 0 ; i < n; i++){
            sum1 += gas[i];
        }
        for(int j = 0 ; j < n ; j++){
            sum2 += cost[j];
        }
        if(sum2 > sum1) return -1;
        int diff = 0 , start = 0;
         for(int i =  0 ; i < n ; i++){
                  
               if(diff < 0 ){
                   start = i;
                   diff = 0 ;
               }
                diff += gas[i] - cost[i];
         } 
           return start; 
    }  
};
