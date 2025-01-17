class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        // code here
        int n  = arr.size();
        if(n == 1) return 0;
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto num : arr){
            pq.push(num);
        }
        
         int sum = 0;
         
        while(pq.size() > 1){
              int first = pq.top();
              pq.pop();
              int second = pq.top();
              pq.pop();
              
            int  val = first+second;
            
             sum += val;
             pq.push(val);
            
        }
        
        return sum;
    }
};
