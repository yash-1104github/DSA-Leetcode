class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int n = nums.size();
        for(auto num : nums){
            mp[num]++;
        }

//min heap
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        for(auto it : mp){

              pq.push({it.second,it.first});
                     
              if(pq.size() > k){
                  pq.pop();
              }    
        }
 
        while(!pq.empty()){

            pair<int,int>temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }

        
      return ans;
    }
};
