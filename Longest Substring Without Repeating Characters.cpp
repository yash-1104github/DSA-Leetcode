class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>Set;
        int  MaxLen =0,left=0,right=0,n=s.size();
        while(right<n){
            //char not present return true
            if(Set.find(s[right])==Set.end()){
                int Len= right-left+1;
                MaxLen = max(MaxLen,Len);
                Set.insert(s[right]);
                right++;
            }
            else{
             Set.erase(s[left]);
                left++;
            }
        }
        return  MaxLen ;
    }
};
