class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int>mp = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000},     
        };
        
        int n = str.size(), ans = 0;
        
        for(int i = 0 ; i < n; i++){
            
            if(mp[str[i]] < mp[str[i+1]]){
                ans += mp[str[i+1]] - mp[str[i]];
                i = i+1;
            }
            else{
                 ans +=  mp[str[i]];
            }     
        }
       return ans;    
    }
};
