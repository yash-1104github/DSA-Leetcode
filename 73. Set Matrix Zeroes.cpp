//better TC =  o(N*M) and sc = o(n+m)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n=matrix.size();
        int m=matrix[0].size();
        
        unordered_map<int,int>mx,my;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    //it add row and col to the map
                    mx[i]++;my[j]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
//If the row i is found in the mx map (indicating that this row contains a 0).
// If the column j is found in the my map (indicating that this column contains a 0).
                if(mx.find(i)!=mx.end()) matrix[i][j]=0;
                else if(my.find(j)!=my.end()) matrix[i][j]=0;
            }
        }
    }
};

//brute
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
