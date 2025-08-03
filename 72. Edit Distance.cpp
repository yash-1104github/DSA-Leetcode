class Solution {
public:
    
    vector<vector<int>>temp;
    int solve(string word1, string word2, int i , int j){
            int n = word1.size(), m = word2.size();
            if(i == n){
                  return m-j; //out of bound insert
            }
            if(j==m){
                 return n-i; // out of bound delete
            }

            if(temp[i][j] != -1){
                  return temp[i][j]; //memorization
            }

            if(word1[i] == word2[j]){
                  return solve(word1,word2, i+1, j+1);
            }

            int insert = 1 + solve(word1,word2, i, j+1); 
            int del = 1 + solve(word1,word2, i+1, j);
            int replace = 1 + solve(word1,word2, i+1, j+1);

            temp[i][j] =  min({insert,del,replace});
            return temp[i][j];
    }

    int minDistance(string word1, string word2) {
         // word1 => word2;
         int n = word1.size(), m = word2.size();
         temp = vector<vector<int>>(n,vector<int>(m,-1));
         int i = 0, j = 0;
         return solve(word1, word2, 0, 0);
    }
};
