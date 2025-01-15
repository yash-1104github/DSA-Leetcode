class Solution {
 public:
 
    int maxScore(string s) {
          
         int n = s.size();

         vector<int>leftSum(n,0);
         vector<int>rightSum(n,0);
 
         if(s[0] == '0'){
             leftSum[0] = 1;
         }

         for(int i = 1; i < n ; i++){
             if(s[i] == '0'){
                  leftSum[i] = leftSum[i-1]+1;
             }
             else{

              leftSum[i] = leftSum[i-1]+0;
             }
         }

         if(s[n-1] == '1'){
            rightSum[n-1] = 1;
         }

         for(int i = n-2; i >= 0 ; i--){
             if(s[i] == '1'){
                  rightSum[i] =  rightSum[i+1]+1;
             }
             else{

             rightSum[i] =  rightSum[i+1]+0;
             }
         }

           int ans = 0;
         for(int i =  0 ; i < n-1 ; i++){
                ans = max(ans,leftSum[i]+rightSum[i+1]);
         }

         return ans;
    }
};

class Solution {
 public:
 
    int maxScore(string s) {
        
         int n = s.size();
         int cnt = 0 , temp = 0, ans = 0;

         for(char ch : s){
            if(ch == '0'){
                cnt++;
            }
            temp++;
         }
         
          if(temp == 0 || cnt == 0) return n-1;
         
          cnt = 0 , temp = 0;

          int i = 0 , val  = 0;

           while(i < n-1){

                int k = i;
                cnt = 0, temp = 0;
                                                
                for(int i = 0 ; i <= k ; i++){
                     if(s[i] == '0')cnt++;                  
                }
                
                for(int j = i+1 ; j < n ; j++){
                     if(s[j] == '1')temp++;                  
                }
               
                i++;
               
        ans = max(cnt+temp,ans);                                         
         }

     return ans;

    }
};


