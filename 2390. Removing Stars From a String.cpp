class Solution {
public:
    string removeStars(string s) {

        stack<char>st;
        string ans = "";

         for(auto c : s){    
          if(c == '*'){        
            st.pop();
            continue;   
          }
      
           st.push(c);
          
        }
          
          while(!st.empty())
          {         
                char c = st.top();    
                ans += c ;
                st.pop();
          }
          
          reverse(ans.begin(),ans.end());

           return ans;
    }
};

class Solution {
public:
    string removeStars(string s) {

         string c;
         for(int i = 0 ; i < s.size() ; i++){

               if(s[i] == '*'){
                  c.pop_back();
                  continue;
               }

               c += s[i];

         } 
        return c;
    }
};

