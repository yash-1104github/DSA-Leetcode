class Solution {
public:
    int minimumLength(string s) {
        
       int n = s.size();

       if(n <= 2) return n;
        
        unordered_map<char,int>mp;

       
       for(int i = 0 ; i < n ; i++){
                mp[s[i]]++;
       }

      int ans = 0; 

      for(auto it : mp){
            int val = it.second;
          while(val > 2 ){
                val = val-2;
          }

          ans += val; 
      }

       return ans; 
    }
};
