class Solution {
public:
    int liveCnt(vector<vector<int>>& board,int i , int j){
          int m = board.size();
          int n = board[0].size();
          int liveNeb = 0;
         //horizontal
           if(j-1 >= 0){
               if(board[i][j-1] == 1 || board[i][j-1] == 3){
                   liveNeb++;
               }
           }
            if(j+1 <  n){
               if(board[i][j+1] == 1 || board[i][j+1] == 3){
                   liveNeb++;
               }
           }
        //vertical
        if(i-1 >= 0){
               if(board[i-1][j] == 1 || board[i-1][j] == 3){
                   liveNeb++;
               }
           }
        if(i+1 < m){
               if(board[i+1][j] == 1 || board[i+1][j] == 3){
                   liveNeb++;
               }
           }
        //diagonl die
        if(i-1 >= 0 && j-1 >=0){
               if(board[i-1][j-1] == 1 || board[i-1][j-1] == 3){
                   liveNeb++;
               }
           }
        
        
        //diagonal dir 
        if(i-1 >= 0 && j+1 < n){
               if(board[i-1][j+1] == 1 || board[i-1][j+1] == 3){
                   liveNeb++;
               }
           }
        
        if(i+1 < m  && j-1 >= 0){
               if(board[i+1][j-1] == 1 || board[i+1][j-1] == 3){
                   liveNeb++;
               }
           }
        
        if(i+1< m && j+1< n) {
               if(board[i+1][j+1] == 1 || board[i+1][j+1] == 3){
                   liveNeb++;
               }
           }
        return liveNeb;
    }
    
    
    
    
    void gameOfLife(vector<vector<int>>& board){         
        int m = board.size();
        int n = board[0].size();

        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n ; j++){
                 int cnt = liveCnt(board , i ,j);
         
                if(board[i][j] == 0){
                    if(cnt == 3){
                        board[i][j] = 2;
                    }
                }
                else if(board[i][j] == 1){
                        if(cnt < 2 || cnt > 3){
                            board[i][j] = 3;
                        }
                    }
                
            }
        }
                
                for(int i = 0 ; i < m; i++){
                  for(int j = 0; j < n ; j++){
                    if(board[i][j]  == 2){
                        board[i][j] = 1;
                    }
                      else if(board[i][j] == 3){
                              board[i][j] = 0;
                      }
                   }
                }
            
        }      
};
