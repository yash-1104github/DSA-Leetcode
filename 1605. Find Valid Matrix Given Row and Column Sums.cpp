class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size() , n = colSum.size() ;
        vector<vector<int>>result(m,vector<int>(n,0));
        
        int i = 0 , j = 0 ;
        while( i < m && j < n){
            
        result[i][j] = min(rowSum[i],colSum[j]);
           
            rowSum[i]  -= result[i][j];
            colSum[j]  -= result[i][j];
            
            if(rowSum[i] == 0 ){
                i++;
            }
            else if (colSum[j] == 0){
                j++;
            }         
        }
        return result;
    }
};
