class Solution {
public:
    string sortSentence(string s) {
        
       int n = s.size();
       vector<pair<int,string>>temp;   

        int  j = 0;
         string ans = "";
         while (j < n){
               if( 48 <= s[j] && s[j] <= 57 ){
                    temp.push_back({s[j]-'0',ans});
                    ans = "";
                    j++;
               }

              if(s[j] == ' ') j++;
                ans += s[j];
               j++;
         }

         sort(temp.begin(),temp.end());

            string ans1 = "";
          for(auto it : temp){
                ans1 += it.second;
                ans1 += " ";
          }

          int m = ans1.size(); 
          return ans1.substr(0,m-1);

    }
};
