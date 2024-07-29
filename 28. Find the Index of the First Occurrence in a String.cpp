class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size() , m = needle.size();
    
        
        for(int i = 0 ; i < n ; i++){
             for(int j =  m; j <= n; j++)
          if(haystack.substr(i,j) == needle){
           return i;
           
       }
      }
        return -1;
    }
};
