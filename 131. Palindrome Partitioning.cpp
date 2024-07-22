class Solution {
public:
        bool isPalindrom(string& s, int i , int j){
         while(i < j){
             if(s[i] != s[j]){
                   return false;
            }
             i++;
             j--;
         }
        return true;
      }
    
    void solve( int idx , string& s, vector<string>& temp, vector<vector<string>>& ans){
      int n = s.size();
      
      if(idx == n ){
          ans.push_back(temp);
          return;
      }
    
        for(int i = idx ; i < n ; i++){
            
            if(isPalindrom(s,idx,i)){
                
            temp.push_back(s.substr(idx,i-idx+1));
                
            solve(i + 1 , s, temp, ans);
                
            temp.pop_back();
        }
    }
  } 

    vector<vector<string>> partition(string s) {
    vector<vector<string>>ans;
        vector<string>temp;
         
        solve( 0, s, temp, ans );
        
        return ans;
    }
};
