class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int cnt = 0 , ans = 0;
        for(auto ch : s){
            if(ch == '('){
                st.push(ch); 
            }
            else if(ch == ')'){
                cnt = st.size();
                st.pop();
            }
            else continue;
             ans = max(ans,cnt);
        }
        return ans;
    }
};
