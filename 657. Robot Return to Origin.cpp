class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        unordered_map<char,int>mp = {{'U',0},{'D',0},{'R',0},{'L',0}};
        
        for(char ch : moves){
              if(mp.find(ch) != mp.end()){
                    mp[ch]++;
              }
        }
        
        if(mp['U'] == mp['D'] &&  mp['L'] == mp['R'])return true;


        return false;
    }
};
