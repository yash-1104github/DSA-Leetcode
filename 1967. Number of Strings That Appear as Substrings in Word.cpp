class Solution {
public:
   bool issub(string temp, string word){
        int n = temp.size(), m = word.size();
        if(n > m) return false;
             
             for(int i =  0 ; i < m-n+1 ; i++){
                   string temp1 = word.substr(i,n);
                   if(temp1 == temp ){
                       return true;
                   }
             }
           return false;
   }
   
    int numOfStrings(vector<string>& patterns, string word) {
         int n = patterns.size();      
         int i = 0, cnt = 0;

         while(i < n){
              if(issub(patterns[i],word)){
                  cnt++;
              }
              i++;
         }
            return cnt;
    }
};
