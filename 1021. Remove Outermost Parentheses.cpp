TC = O (n)
class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size() , bal = 0 ;
        string ans;
        for(int i = 0 ; i< n; i++){
            if(s[i] == '('){
            if(bal > 0) {
                ans += s[i];
            }
            bal++;
          }
            else {
             bal--;
            if(bal > 0) {
                ans += s[i];
            }
          }
        }
        return ans;
    }
};
