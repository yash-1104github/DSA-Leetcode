class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int  m = score.size();
        
         for(int i = 0; i < m ;i++){
             for(int j = i+1 ; j < m ; j++){
                 if(score[i][k] < score[j][k] ){
                     swap(score[i],score[j]);
                 }
             }
         }
          return score;
    }
};
