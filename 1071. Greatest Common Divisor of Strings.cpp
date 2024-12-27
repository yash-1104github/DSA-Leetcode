class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        
        if(str1 + str2 != str2 + str1) return "";
        
        
        int n = str1.size();
        int m = str2.size();
        
        string temp = str1.substr(0,gcd(n,m));
       
        
         return temp;
    }
};
