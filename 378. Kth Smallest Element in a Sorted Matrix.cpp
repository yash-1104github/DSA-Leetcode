class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
           //max heap
        priority_queue<int>pq;
        int  i = 0;

        while(i < n){
        for(int j = 0 ; j < n ; j++){
             pq.push(matrix[i][j]); 
             if(pq.size()> k) pq.pop(); 
        }
        i++;
     }

   return pq.top();
    }
};

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
           //min heap
        priority_queue<int, vector<int>, greater<int>>pq;
        int  i = 0;

        while(i < n){

        for(int j = 0 ; j < n ; j++){
             pq.push(matrix[i][j]);  
        }
        i++;
     }
     
     int val;
     while(k > 0){
         val = pq.top();
        pq.pop();
        k--;
     }

   return val;
    }
};
