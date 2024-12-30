class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
         int n = grid.size();
         int cnt = 0;
         
         map<vector<int>,int>mp;            

          for(int i  = 0 ; i < n ; i++){
                  vector<int>ans1;
               for(int y = 0 ; y < n ; y++){               
                     ans1.push_back(grid[i][y]);
               }      
                 mp[ans1]++;
          }

            for(int i  = 0 ; i < n ; i++){
                  vector<int>ans2;
               for(int y = 0 ; y < n ; y++){               
                     ans2.push_back(grid[y][i]);
               }      
                 if(mp.find(ans2) != mp.end()){
                     cnt += mp[ans2];
                 }
          }

       return cnt;

    }
};



class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int ans = 0, cnt = 0;

        // vector<vector<int>>temp;
        // vector<int>ans;

          for(int i  = 0 ; i < n ; i++){

               for(int y = 0 ; y < n ; y++){

                     for(int k  = 0 ; k < n ; k++){

                       if(grid[i][k] == grid[k][y]){
                             cnt++;
                        }  
                   
                     }
                      if(cnt == n) {
                         ans++;
                    }
                    cnt = 0;                 
               }
          }


       return ans;

    }
};
