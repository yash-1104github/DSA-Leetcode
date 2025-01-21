class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        priority_queue<int>pq;

        for(auto num : nums){
            pq.push(num);
        }
          
          int k = 0, result = 1;
          while(k < 2){
              
              int top = pq.top();
              pq.pop();

              result *= top-1;
              k++;

          }

          return result;
    }
};
