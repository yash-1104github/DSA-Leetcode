
class Solution {
public:
    int count(int left, int right, string s ){
           unordered_set<char>st;
           for(int i = left+1; i < right; i++){
                 if(st.find(s[i]) == st.end()){
                       st.insert(s[i]);
                 }
           }
           return st.size();
    }
    
    int countPalindromicSubsequence(string s) {
      int n = s.size();
      int ans = 0;
      unordered_map<char,int>mp;
       
       for(char ch : s){
            mp[ch]++;
       }
 
      for(auto it : mp){
            if(it.second == 1) {
                 continue;
            }

          else{
                for(int i = 0; i < s.size(); i++){
                     if(s[i] == it.first){
                          int left = i;
                          int right = s.find_last_of(it.first); 
                         ans +=  count(left, right, s);
                         break;
                    }        
                }
          } 
    }
      
      return ans;
    }
};
