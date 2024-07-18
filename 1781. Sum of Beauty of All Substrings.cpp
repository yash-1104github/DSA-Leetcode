class Solution {
public:
    int beautySum(string s) {
        int ans = 0 , n = s.size();
        
        for(int i = 0 ; i < n; i++){
            unordered_map<char,int>mp;
            for(int j = i; j < n ; j++){
                mp[s[j]]++;
            
            int maxfreq =  INT_MIN;
            int minfreq =  INT_MAX;
            
            for(auto it: mp){
                maxfreq = max(maxfreq, it.second);
                minfreq = min(minfreq, it.second);
            }
            ans += maxfreq - minfreq;
          }
        }
        return ans;
    }
};
