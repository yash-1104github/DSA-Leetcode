class Solution {
public:
    
    void solve(int n , string& temp, vector<string>& ans){
    
        if( temp.size() == 2*n ){
            if(isvalid(temp)){
             ans.push_back(temp);
        }
            return;
    }        
           temp.push_back('(');
           solve(n , temp , ans);
           temp.pop_back();
        
            temp.push_back(')');
            solve(n ,temp ,ans);
            temp.pop_back();
       }    
    bool isvalid( string& temp){
        int cnt = 0;
        for(char  &ch : temp){
        if(ch == '('){
            cnt++;
        }
        else    cnt--;
        if(cnt < 0 )   return false;
      }   
        return cnt == 0;      
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp = "";
        solve(n , temp , ans );      
        return ans ;   
    } 
};
