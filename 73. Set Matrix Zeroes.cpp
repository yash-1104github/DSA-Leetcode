class Solution {
public:
   
    void  rowZero(int a,vector<vector<int>>& matrix){
         int n = matrix[0].size();//row size  
        for(int i = 0 ; i < n;i++){
            if(matrix[a][i] != 0 ){
             matrix[a][i] = 'a';
            }
        }
        return ;
    }
     
    void colZero(int b,vector<vector<int>>& matrix){
          int m = matrix.size();//col size
          for(int i = 0 ; i < m ; i++){
              if(matrix[i][b] != 0){
                  //implement 'a' insteas of -1 to mantain egde case 
                  //if -1 already present in the matrix
               matrix[i][b] = 'a';
             }
          }
        return ;
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix[0].size();//row size 
         int m = matrix.size();//col size
        int cnt = 0;
        for(int i = 0 ; i < m; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0 ){
                    cnt++;
                    rowZero(i,matrix);
                    colZero(j,matrix); 
                   }   
                }
            }
        if(cnt > 0){
        for(int i = 0; i < m ;i++){
            for(int j = 0 ; j < n ;j++){
                if(matrix[i][j] == 'a' ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
        return ;
    }
};
