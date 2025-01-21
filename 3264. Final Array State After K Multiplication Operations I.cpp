class Solution {
public:
     vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
      int n = nums.size();
      vector<int>ans(n,0);
        // min heap
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

     for(int i = 0 ; i < n; i++){
         pq.push({nums[i],i});
     }

     while(k > 0){        
         auto sm = pq.top();
         pq.pop();

         int i = sm.first;
         int j = sm.second;
         
         i *= multiplier;
         ans[j] = i;

         pq.push({i,j});  
         k--;   
    }
     
     while(!pq.empty()){
         auto top = pq.top();
         pq.pop();
         ans[top.second] = top.first;
     }

     return ans;
    }
};
