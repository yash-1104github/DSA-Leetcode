class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
        if(n==0) return "";
        
        string ans = "";
       
        sort(strs.begin(),strs.end());
        string a = strs[0] , b = strs[n-1];
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] != b[i]){
                return ans;
            }
             ans += a[i];
        }
         return ans;
    }
};
