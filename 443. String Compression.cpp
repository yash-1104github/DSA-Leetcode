class Solution {
public: 
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        int read = 0;
        int write = 0;
              
        while(read < n){
           char currentchar = chars[read];
           int cnt = 0;

        while(read < n && currentchar == chars[read] ){
               read++;
               cnt++;
        }

        chars[write++] = currentchar;

          if(cnt > 1){
               string c = to_string(cnt); 
                for(char ch : c){
                   chars[write] = ch;
                   write++;
            }
          }
        }     
         return write;
    }
};
