class Solution {
public:
    int isPali(string &str, int m, int n){
         if(m >= n){
            return 1;
         }
         
         if(str[m] == str[n])
         return isPali(str,m+1,n-1);
         else return 0;
    }

    int countSubstrings(string s) {
         int n = s.size();
         int i = 0;
         int cnt = 0;
        
        for(int i = 0 ; i < n ; i++){
              for(int j = i ; j < n ; j++){
                   if(isPali(s, i, j))cnt++;
              }
        }

      return cnt;
    }
};

class Solution {
public:
    bool isPali(string str, int m, int n){
          while(m < n){
             if(str[m] != str[n]) return false;
             m++;
             n--;
          }
          return true;
    }

    int countSubstrings(string s) {
         int n = s.size();
         int i = 0;
         int cnt = 0;
        
        for(int i = 0 ; i < n ; i++){
              for(int j = i ; j < n ; j++){
                   if(isPali(s, i, j))cnt++;
              }
        }

      return cnt;
    }
};

class Solution {
public:
    bool isPali(string str){
          int j = str.size()-1;
          int i = 0;
          while(i < j){
             if(str[i] != str[j]) return false;
             i++;
             j--;
          }
          return true;
    }

    int countSubstrings(string s) {
         int n = s.size();
         int i = 0;
         int cnt = 0;
        while(i < n-1){             
             int j = 2 ;
             while(j <= n-i){
                    string temp = s.substr(i,j);
                    if(isPali(temp)) cnt++;
                    j++;
             }
            i++;
        }
        cnt += n;    
      return cnt;
    }
};
