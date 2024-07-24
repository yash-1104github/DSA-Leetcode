class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size() , n =  grid[0].size();
        int cnt = 0 , row = m-1, col = 0;
        while(row >= 0 && col < n ){
             if(grid[row][col] < 0){
                 row--;
                 cnt += n - col;  
             }
           else  col++;
        }
        return cnt;
    }
};
