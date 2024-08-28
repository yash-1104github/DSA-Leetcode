class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
      int n = matrix.size();//column size && no of rows
      int m = matrix[0].size();//row size && no of colums
      int right = m -1 , bottom =  n - 1  , left = 0, top = 0;   

            while(top <= bottom && left <= right){
            //right -->
            for(int i = left ; i <=  right; i++ ){
                    ans.push_back(matrix[top][i]);
                }
                top++;
       
            //bottom-->
            for(int i = top ; i <= bottom; i++ ){
                    ans.push_back(matrix[i][right]);
                    
                }
                 right--;
    
                //check if there is bottom left
                if(top <= bottom){
            //left-->
            for(int i = right; i >= left ; i-- ){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
        }

                //check if there if value left on left to fo up
                if(left <= right){
            //top-->
             for(int i = bottom ; i >= top; i--){
                 ans.push_back(matrix[i][left]);
             }
             left++;        
        }
    }
        return ans;
    }
};
