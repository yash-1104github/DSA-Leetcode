class Solution {
public:
    string simplifyPath(string path) {

      int n = path.size(), i = 0;
      stack<string>st;
      string ans = "";
      
      while(i < n) {
           string temp = ""; 

           while(i < n && path[i] != '/'){
                 temp = path[i] + temp;
                 i++;
           }

           if(temp.empty()){
                 i++;
               continue;
           }

           if(temp == ".." && !st.empty()){
               string up = st.top();
               st.pop();
           }
            
            if(temp != ".." && temp != "."){
                st.push(temp);
              }
            i++;
      }


       while(!st.empty()){
            ans += st.top();
            st.pop();
            if(!st.empty()){
                 ans += "/";
            }
       }
        
       reverse(begin(ans),end(ans));
       ans = "/"+ ans;

      return ans;
    }
};
