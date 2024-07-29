class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), cnt = 0;
        for(int i = n-1  ; i >= 0 ; i--){
            if(cnt >= 1 && s[i] == ' '){
                 return cnt;
            }
             if(s[i] != ' '){
                 cnt++;
             }
        }
        return cnt;
    }
};
