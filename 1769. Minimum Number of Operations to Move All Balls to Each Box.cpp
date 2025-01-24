class Solution {
public:
    vector<int> minOperations(string boxes) {
       int n = boxes.size();

         vector<int>ans(n,0);
         vector<int>leftsum(n,0);
         vector<int>rightsum(n,0);

            int cumval = 0;   
            int cumsum = 0;     

       for(int i = 0; i < n ; i++){
              leftsum[i] = cumsum;
              cumval += boxes[i]-'0';
              cumsum += cumval;
       }

             cumval = 0;   
             cumsum = 0; 
       for(int j = n-1; j >= 0; j--){
              rightsum[j] = cumsum;
              cumval += boxes[j]-'0';
              cumsum += cumval;
       }

        
        for(int i = 0 ; i < n ; i++){
              ans[i] = leftsum[i]+rightsum[i];
        }

        return ans;
    }
};


class Solution {
public:
    vector<int> minOperations(string boxes) {
       int n = boxes.size();
        vector<int>ans(n,0);
   
        for(int i = 0 ; i < n ; i++){
            int cnt = 0;
             for(int j = 0 ; j < n ; j++){
                   if(i != j && boxes[j] == '1'){
                        cnt += abs(i-j);
                   } 
             }
             ans[i] = cnt;
        }
        return ans;
    }
};
