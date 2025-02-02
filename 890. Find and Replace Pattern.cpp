class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         int n = words.size(), m = pattern.size();
         vector<string>ans;        
         int j = 0;

         while(j < n){
            string temp = words[j];
              int flag = 1;
              //bidirection map
         unordered_map<char, char>mp1,mp2;


         for(int i = 0; i < temp.size(); i++){
                 if(mp1.find(temp[i]) == mp1.end()){
                      mp1[temp[i]] = pattern[i];
                 }
                 else{
                    if(mp1[temp[i]] != pattern[i] ){
                        flag = 0;
                        break;
                    }
            }
         }

         for(int i = 0 ; i < temp.size(); i++){
              if(mp2.find(pattern[i]) == mp2.end()){
                mp2[pattern[i]] = temp[i];
              }
              else{
                if(mp2[pattern[i]] != temp[i]){
                    flag = 0;
                    break;
                }
              }
         }

         if(flag == 1) ans.push_back(words[j]);
              j++;
         }


        return ans;
     }
};
