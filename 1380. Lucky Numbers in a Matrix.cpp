class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int N = matrix.size(), M = matrix[0].size();
        
        int rMinMax = INT_MIN;
        for (int i = 0; i < N; i++) {

            int rMin = INT_MAX;
            for (int j = 0; j < M; j++) {
                rMin = min(rMin, matrix[i][j]);
            }
            rMinMax = max(rMinMax, rMin);
        }
        
        int cMaxMin = INT_MAX;
        for (int i = 0; i < M; i++) {

            int cMax = INT_MIN;
            for (int j = 0; j < N; j++) {
                cMax = max(cMax, matrix[j][i]);
            }
            cMaxMin = min(cMaxMin, cMax);
        }
        
        if (rMinMax == cMaxMin) {
            return {rMinMax};
        }
        
        return {};
    }
};


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size() ;
        vector<int>ans;
        vector<int>st;
        vector<int>mt;
       
         for(int i = 0 ; i < m ; i++){
              int mini = INT_MAX; 
             for(int j = 0; j < n ; j++){
                 mini = min(mini,matrix[i][j]);
             }
             st.push_back(mini);
         }
        for(int i = 0; i < n ; i++){
            int  maxi = INT_MIN;
             for(int j = 0; j < m ; j++){
                 maxi = max(maxi,matrix[j][i]);
             }
             mt.push_back(maxi);
         }
          for(int i = 0; i < m ; i++){
              for(int j = 0 ; j < n ;j++){
                  if(matrix[i][j] == st[i] && matrix[i][j] == mt[j]){
                      ans.push_back(matrix[i][j]);
                  }
              }
          }
        return ans;
    }
};
