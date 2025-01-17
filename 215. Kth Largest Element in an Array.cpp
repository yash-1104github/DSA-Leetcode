class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

       int n = nums.size();
       priority_queue<int,vector<int>,greater<int>>pq;

       for(auto num : nums){

            pq.push(num);
            
         if(pq.size() > k){
             pq.pop();
         }
       }

    return pq.top();

    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

       int n = nums.size();
       priority_queue<int>pq(nums.begin(),nums.end());

      int ans ;
       while(k > 0){
             
             ans = pq.top();
             pq.pop();
             k--;
          
       }

    return ans;

    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

       int n = nums.size();
       priority_queue<int>pq;

       for(int i = 0 ; i < n ; i++){
           pq.push(nums[i]);
       } 

      int ans ;
       while(k > 0){
             
             ans = pq.top();
             pq.pop();
             k--;
          
       }

    return ans;

    }
};
