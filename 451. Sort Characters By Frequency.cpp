class Solution {
public:
    string frequencySort(string s) {
     string ans ;   
     int n = s.size();
     unordered_map<char,int>mp;

     for(char c : s){
          mp[c]++;
     }

//max heap
    priority_queue<pair<int,int>>pq;

    for(auto it : mp){
          pq.push({it.second,it.first});
    }

    while(!pq.empty()){
          auto top = pq.top();
          pq.pop();

          int i = top.first;
          char j = top.second;

          while(i > 0){
             ans += j;
             i--;
          }
    }

   return ans;


    }
};
