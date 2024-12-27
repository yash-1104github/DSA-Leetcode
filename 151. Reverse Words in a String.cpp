class Solution {
public:
    string reverseWords(string s) {    
           
        string ans = "";
        int i = s.size()-1;
        

        while( i >= 0){  
                
                while(i >= 0 && s[i] == ' '){
                    i--;
                }

                if(i < 0) break;

                int j = i;
                
                while(i >= 0 && s[i] != ' '){
                     i--;
                }
              
                ans += s.substr(i+1,j-i);

               ans += " ";
           
        }   

        string res = ans.substr(0 , ans.size()-1);

         return res ;
    }
};


//leetcode


class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end()) ;
        int l = 0 , r = 0 , n = s.size();
        int i = 0;
        while(i < n){
            while( i<n && s[i] != ' '){
                s[r++] = s[i++];
            }
            if(l < r){
                reverse(s.begin()+l , s.begin()+r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++ ;
        }
        s = s.substr(0,r-1);
        return s;
    }
};



//gfg
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
          int n = str.size();
        string temp = "", ans = "";
        for(int i = 0 ; i < n; i++){
            
            if(str[i] == '.' ){
                ans = temp + ans;
                ans = str[i] + ans;
                 temp = "";
                continue;
            }
            temp += str[i] ;
             
            if(i == n-1){
                ans = temp + ans;
            }
        }
        return ans;
    }
};



