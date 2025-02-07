class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int>ans;

        unordered_set<int>st;

        for(int i = 0 ; i < n ; i++){
             if(s[i] == c)st.insert(i);
        }

        for(int j = 0 ; j < n ; j++) {
               int val = n+1;
                 for(int num : st){
                      val = min(val, abs(num-j));
                 }
                 ans.push_back(val);
        }

    return ans;
    }
};
