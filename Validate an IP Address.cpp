class Solution {
  public:
    int isValid(string str) {
        if(str.size() < 7 ) {
            return false;
        }
         string s = "";
        for(int i = 0 ; i <= str.size(); i++){
            if(str[i] == '.' || i == str.size()){
            if(s[0] == '0' && s.size() > 1 
               || s.size() > 3 || s.size()==0) return false;
            int num = stoi(s);
            if(num  >= 256) return false;
            s =  "";
            }
           else  s += str[i];
        }
         int cnt = 0;
        for(int i = 0  ; i < str.size() ; i++){
            if(str[i] == '.') cnt++;
            if(str[i] == '.' && str[i] == str[i-1]){
                return false;
            }
        }
            if(cnt != 3) return false;
        
        return true;
    }
}
