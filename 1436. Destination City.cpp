class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
           int n = paths.size();
           unordered_map<string,int>mp;

        for(int i = 0 ; i < n ; i++){
             mp[paths[i][0]]++;
        }

           string ans = "";
        for(int i = 0 ; i < n; i++){           
          if(mp.find(paths[i][1]) == mp.end()){
                ans =  paths[i][1];
                break;
          }      
        }
      return ans;
    }
};
