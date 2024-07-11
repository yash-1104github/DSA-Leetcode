class Solution {
public:
    string reverseParentheses(string s) {
       stack<char>st;
         string ans ;
      for(auto i : s){
          if(i == '(') st.push(i);
          else if (i == ')'){
               string temp = "";
              while(st.top() != '('){    
                  temp += st.top();
                  st.pop();
              }
              st.pop();
               for(auto i : temp) st.push(i);
          }
          else st.push(i);
      }    
        while(!st.empty()){
        ans += st.top();
        st.pop();       
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};
