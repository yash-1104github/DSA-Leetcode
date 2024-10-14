class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(26,0);
        int n = sentence.size();
        if(n < 26 ) return false;
        
        for(int i = 0 ; i< n ; i++){
            
            char ch = sentence[i];
            
            if(ch >=97 && ch <= 122){
                ans[ch-'a']++;
            }
            
        }
        
        for(int i = 0 ; i < 26 ; i++){
            if(ans[i] == 0) return false;
        }
        
        return true;
    }
};
