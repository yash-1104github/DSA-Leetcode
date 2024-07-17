class Solution {
private:
    bool palidrom(string &s, int i , int j){
        if(i >= j ){
            return true;
        }
        if(s[i] == s[j])
            return palidrom(s,i+1,j-1);
        
            return false;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n <= 1) return s;
         int  maxlen = 0, st = -1;
        for(int i = 0 ; i  < n ; i++){
            for(int j = i ; j < n ; j++){
                if(palidrom(s,i,j) == true){
                    if(j - i + 1 > maxlen ){
                    maxlen = j - i +1;
                    st = i ;
                    }
                }
            }
        }
        return s.substr(st , maxlen);
    }
};
