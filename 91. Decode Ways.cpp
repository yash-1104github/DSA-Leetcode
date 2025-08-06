class Solution {
public:
     
    int solve(string s, int i, int n, vector<int> &t){
            
           if(i >= n){
              return 1;
           }

           if(s[i] == '0'){
               return 0;
           }

          if(t[i] != -1){
               return t[i];
           }

           int left = 0, right = 0;

            left = solve(s,i+1,n,t);

        if(i < n-1){
          if(s[i] == '1'  || (s[i] == '2' && s[i+1] <= '6')){
                right = solve(s,i+2,n,t);
             }
          }

          t[i] = left+right;
          return t[i];
    }

    int numDecodings(string s) {
          int n = s.size();
           vector<int>t(n,-1);
          return solve(s, 0, n, t);
    }
};91. Decode Ways
