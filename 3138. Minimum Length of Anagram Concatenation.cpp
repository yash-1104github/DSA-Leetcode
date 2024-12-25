class Solution {
public:
bool check(string &s,int n){
    
unordered_map<char,int>mp;
    
for(int i=0;i<n;i++){
mp[s[i]]++;
}
    
for(int i=n;i<s.size();i+=n){
    
unordered_map<char,int>match;
for(int j=i;j<i+n;j++){
match[s[j]]++;
}
if(match!=mp){
return false;
}
}
return true;
}
int minAnagramLength(string s) {
    
int n = s.size();


  for(int i = 1;i<= n ;i++){
    if(n%i==0 && check(s,i)){
        return i;
    }
  }
  return n;
 }
};
