class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n = words.size();
        unordered_set<char>st1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char>st2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char>st3 = {'z','x','c','v','b','n','m'};
         vector<string>ans;
        int flag = 0;
        for(string temp : words){
              int n = temp.size();
              char ch = tolower(temp[0]);

              if(st1.find(ch) != st1.end())flag = 1; 
              else if(st2.find(ch) != st1.end())flag = 2; 
              else if(st3.find(ch) != st1.end())flag = 3; 
                
                int idx = 0;
              for(int i = 1; i < temp.size(); i++){
                    char ch = tolower(temp[i]);
                    if(flag == 1){
                         if(st1.find(ch) == st1.end())idx = 1;
                    }
                    else if(flag == 2){
                         if(st2.find(ch) == st2.end())idx = 1;
                    }
                   else if(flag == 3){
                         if(st3.find(ch) == st3.end())idx = 1;
                    }
              }
              if(idx == 0) ans.push_back(temp);
        }
        
         return ans;
    }
};
