
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end()) ;
        int l = 0 , r = 0 , n = s.size();
        int i = 0;
        while(i < n){
            while( i<n && s[i] != ' '){
                s[r++] = s[i++];
            }
            if(l < r){
                reverse(s.begin()+l , s.begin()+r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++ ;
        }
        s = s.substr(0,r-1);
        return s;
    }
};



//error
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string temp = "", ans = "", res = "";
        for(int i = 0 ; i < n; i++){
            
            if(s[i] == ' ' ){
                ans = temp + ans;
                ans = s[i] + ans;
                 temp = "";
                continue;
            }
            temp += s[i] ;
             
            if(i == n-1){
                ans = temp + ans;
            }
            
          for(int i = 0 ; i < ans.size() ; i++){
              if(ans[i] == ' ' && res.size() == 0 ){    
                  continue;
              }
               
              if(ans[i] == ' ' && ans[i] != ans[i-1]){
                  res = res + ' ';
              }
              
              if(ans[i] == ' ' && i == ans.size()-1){
                      continue;
              }
                  res = res + ans[i];               
          }
        }
        return res;
    }
};



