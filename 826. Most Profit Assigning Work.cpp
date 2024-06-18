class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>job;
        for(int i =0;i< difficulty.size();i++){
            job.push_back({difficulty[i],profit[i]});
        }
        sort(job.begin(),job.end());
        sort(worker.begin(),worker.end());
         
        int j =0 , MaxProfit =0 , SumProfit =0;
        for(int i= 0 ;i< worker.size();i++){
            while(job[j].first<=worker[i] && j< worker.size()){
                MaxProfit = max(MaxProfit,job[j].second);
                j++;
            }
            SumProfit += MaxProfit;
            
        }
        return SumProfit;
    }
};
