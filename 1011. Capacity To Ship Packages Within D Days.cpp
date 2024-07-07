class Solution {
private:
    int sumofarr(vector<int>& weights){
        int n = weights.size() , sum = 0;
        for(int i = 0; i< n ; i++){
            sum += weights[i];
        }
        return sum;
    };
    
    int day(vector<int>& weights,int mid){
          int n = weights.size() , dayreq = 1 , load = 0;
           for(int i = 0;i  <n ;i++){
               if(load + weights[i] > mid){
                   dayreq++;
                   load = weights[i];
               }
               else 
                   load += weights[i];
           }
        return dayreq;
    };
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end()), high = sumofarr(weights) ;
        while(low<= high){
            int mid = (low + high)/2;
            int reqDays = day(weights,mid);
            if(reqDays <= days){
                high = mid -1 ;
            }
            else low = mid +1 ;
        }
        return  low;
    }
};
