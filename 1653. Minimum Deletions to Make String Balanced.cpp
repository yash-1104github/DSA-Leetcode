class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        stack<char> st;
        int cnt = 0;
      
        for (int i = 0; i < n; i++) {
            if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                st.pop();  
                cnt++;    
            } else {
                st.push(s[i]);  
            }
        }
        return cnt;
    }
};
