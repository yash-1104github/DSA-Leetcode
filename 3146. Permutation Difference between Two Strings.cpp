class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mp;
        int n1 = s.size() , n2 = t.size() ,  cnt = 0;
        for(int i = 0; i < n1 ; i++){
            mp[s[i]] = i;
        }
         for(int i = 0; i < n2 ; i++){
           cnt += abs(mp[t[i]] - i);
        }
        
        return cnt;
    }
};
