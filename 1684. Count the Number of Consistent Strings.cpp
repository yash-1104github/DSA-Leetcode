class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        unordered_map<int,char>mp;
        for(char c : allowed){
            mp[c]++;
        }
        string temp = "";
        int cnt = 0;
        for(int i = 0 ; i < words.size() ; i++){
             temp = words[i];
             for(char ch : temp){
                 if(mp.find(ch) != mp.end()){
                     cnt++;
                   }
                 }
                 if(cnt == temp.size()){
                     ans++;
                 }
             cnt = 0;
            temp = "";
        }
        return ans;
    }
};
