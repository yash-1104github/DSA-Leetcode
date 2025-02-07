class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        unordered_map<char,int>mp;
        unordered_set<char>st2;

        for(char c : s){
             mp[c]++;
        }

        for(char c : order){
            st2.insert(c);
        }
        
        for(int i = 0 ; i < order.size(); i++){
              while(mp.find(order[i]) != mp.end()){
                     ans += order[i];
                     mp[order[i]]--;
                     if(mp[order[i]] == 0)break;
              }
        }

       for(int j = 0; j < s.size(); j++){
            if(st2.find(s[j]) == st2.end()){
                 ans  += s[j];
            }
       }
        



return ans;


    }
 };
