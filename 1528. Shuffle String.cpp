class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string ans = "";
        vector<pair<int,char>>temp;
         
         int i = 0;
         for(auto c : s){
              temp.push_back({indices[i],c});
              i++;
         }

        sort(temp.begin(), temp.end());

        for(auto it : temp){
              ans += it.second;
        }
      
    return ans;
    }
};
