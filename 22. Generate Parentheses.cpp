class Solution {
public:
        int isValid(string curr1){

            stack<char>st;
             
             for(char ch : curr1){
                if(ch == '('){
                    st.push(ch);
                }
                 else{
                    if(st.empty()) return 0;
                    char c = st.top();
                    if(c == '('){
                        st.pop();
                    }
                 }
             }

             if(!st.empty()) return 0;
             return 1;
        }
    
  vector<string>ans;

    void  traversal(string curr , int n) {

            if(curr.size() == 2*n){
                if(isValid(curr) == 1){
                   ans.push_back(curr);
                }
                return;
            }

             curr.push_back('(');
             traversal(curr,n);
             //undo
             curr.pop_back();
             curr.push_back(')');
             traversal(curr,n);
             //undo
             curr.pop_back();
        }
     
    vector<string> generateParenthesis(int n) {
      

        string temp = "";

        traversal(temp,n);


        return ans;


    }
};

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
