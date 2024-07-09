class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size() ;
        long busyUptill = 0 , waitingtime = 0;
        for(int i = 0;i <n ;i++){
            long arrival = customers[i][0] , time = customers[i][1] ;
            waitingtime += (max(arrival , busyUptill) + time - arrival) ; 
            busyUptill  = max(arrival , busyUptill) + time;
        }
        return waitingtime * 1.0 / n;
    }
};
