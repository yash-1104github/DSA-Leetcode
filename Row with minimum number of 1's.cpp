class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        int index = 1  , min_cnt = INT_MAX; 
        for(int i = 0 ; i < n ; i++){
              int  cnt = 0;
              for(int j = 0 ; j < m ; j++){
                  cnt += a[i][j];
              }
              if(cnt < min_cnt) {
                  min_cnt = min(min_cnt,cnt);
                  index = i ; 
              }
        }
        return index + 1;
    }
};
