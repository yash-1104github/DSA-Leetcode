class KthLargest {
public:
         priority_queue<int, vector<int>,greater<int>>pq;
         int gk;
    KthLargest(int k, vector<int>& nums) {
          gk = k;
        for(auto num : nums){
             
              if(pq.size() < k){
                pq.push(num);
              }

              else if(pq.size() == k && num >= pq.top()){
                   pq.push(num);
              }

             if(pq.size() > k){
                pq.pop();
            }
        }       
    }
    
    int add(int val) {
         if(pq.size() < gk){
                pq.push(val);
           }

          else if(pq.size() == gk && val >= pq.top()){
                   pq.push(val);
          }

        if(pq.size() > gk){
            pq.pop();
        }
      
      return pq.top();
    }

};
