//better
class Solution {
public:
    bool validGrid (vector<vector<char>>& board, int sr, int er, int sc, int ec){
              unordered_set<char>st;
              for(int i = sr ; i < er ; i++){
                  for(int j = sc ; j < ec ; j++){
                        if(board[i][j] == '.')continue;
                      if(st.find(board[i][j]) != st.end()) return false;
                      st.insert(board[i][j]);
                  }
            }
              return true;   
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
      //check for all rows
      //check for all col
      //check for all 3*3 grid martix;
     
         //check for all rows
        for(int i = 0 ; i < 9 ; i++){
            unordered_set<char>st;
            for(int j =  0 ; j < 9 ; j++){
            if(board[i][j] == '.')continue;
            if(st.find(board[i][j]) != st.end()) return false;
            st.insert(board[i][j]);
            }
          }   
        
        //check for all col
        for(int j = 0 ; j < 9 ; j++){
             unordered_set<char>st;
            for(int i = 0 ; i < 9 ; i++){
             if(board[i][j] =='.')continue;
            if(st.find(board[i][j]) != st.end()) return false;
            st.insert(board[i][j]);
            }
        }  
        //check for all 3*3 grid martix;
         for(int sr = 0 ; sr < 9 ; sr+= 3){
             for(int sc = 0 ; sc < 9 ; sc+= 3){
                   if(!validGrid(board,sr, sr+3 , sc ,sc+3))
                      return false;
             }
         }
         return true;
    }
};
