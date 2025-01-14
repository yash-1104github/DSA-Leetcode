class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '[') { 
                st.push(c); 
            } 
            else { 
                if (st.empty() ||
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false; 
                }
                st.pop();
            }
        }
        return st.empty(); 
    }
};


class Solution {
public:
    bool isValid(string s) {

        int n = s.size();
        
        if(n%2==1) return false;
        
        stack<char>st;
 
  
       for(int i = 0  ; i < n ; i++){ 
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){     
                   st.push(s[i]);
            }
            else{
            if(st.empty())  return false;
            char  ch = st.top();

             if(s[i] == ')' && ch == '(' ||
                s[i] == '}' && ch == '{' ||
                s[i] == ']' && ch == '['
                ){
                st.pop();
             }

             else{
                return false;
             }
                 
            }         
        }

        if(st.empty()) return true;

     return false;

    }
};
