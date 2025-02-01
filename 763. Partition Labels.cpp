class Solution {
public:
    vector<int> partitionLabels(string s) {
        
      unordered_map<char,int>mp;
      int maxidx = -1;
      int n = s.size(), cnt = 0;
         vector<int>ans;
      for(int j = n-1 ; j >= 0 ; j--){
             if(mp.find(s[j]) == mp.end()){
                 mp[s[j]] = j;
             }
      }

      for(int i = 0 ; i < n ;i++){
            int idx = mp[s[i]];
            maxidx = max(idx,maxidx);
            cnt++;
            if(i == maxidx){
                ans.push_back(cnt);
                cnt=0;
                maxidx = 0;
            }            
      }
      return ans; 
    }
};
