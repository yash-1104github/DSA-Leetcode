class Solution {
public:
    bool isSubsequence(string s, string t) {
          
          int n = s.size();
          int m = t.size();
 
           if(n == 0 ) return true;
           if(m == 0) return false;
           if(n == 0 && m == 0)  return true;

             int i = 0 , j = 0;          
              while(i < n ){             
                    char c = s[i];                    
                    while(j < m){                         
                         if(c == t[j]) {
                            break;
                         }  
                         else j++;       
                    }
                    if( j == m) return false;
                    i++;
                    j++;
              }

                 return true;          
    } 
};
