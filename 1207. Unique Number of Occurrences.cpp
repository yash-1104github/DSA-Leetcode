class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int>mp;
        vector<int>ans;
        
        int n = arr.size();
         
        for(int i = 0 ; i < n ;i++){
            mp[arr[i]]++;
        }    
          
          for(auto it : mp){
                ans.push_back(it.second);
          }

          sort(ans.begin(),ans.end());
    
          for(int i = 0 ; i < ans.size()-1; i++){
                if(ans[i] == ans[i+1]){
                   return false;
                }
          }

          return true;

    }
};
