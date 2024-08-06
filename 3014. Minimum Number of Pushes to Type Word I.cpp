class Solution {
public:
    int minimumPushes(string word) {
       unordered_map<char,int>mp;
        
        for(auto ch : word){
            mp[ch]++;
        }
        
        vector<int>temp;
        for(auto it : mp){
            temp.push_back(it.second);
        }
        
        sort(temp.begin(),temp.end(),greater<int>());
        
        int ans = 0 , cnt = 0;
        for(auto freq : temp){
            cnt++;
            if(cnt <= 8 ){
                ans += freq*1;
            }
            else if (cnt <= 16){
                ans += freq*2;
            }
            else if (cnt <= 24){
                ans += freq*3;
            }
            else {
                ans += freq*4;
            }
        }
        return ans;
    }
};
