class Solution {
public:
    bool rotateString(string s, string goal) {
          if (s.size() != goal.size()) return false;
        queue<char>st;
        int n = s.size() , i = 0 ;
        for(auto ch : s){
            st.push(ch);
        }
        while( i < n){
            char c = st.front();
            st.pop();
            st.push(c);
              
            string rotated;
            queue<char> temp = st;
            while (!temp.empty()) {
                rotated += temp.front();
                temp.pop();
            }
               if(rotated == goal){
                 return true;
             }
             i++;
        }
        return false;
    }
};
