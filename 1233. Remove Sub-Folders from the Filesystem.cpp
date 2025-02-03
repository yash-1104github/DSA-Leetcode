class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
         vector<string>ans;
         sort(folder.begin(),folder.end());
           
         ans.push_back(folder[0]);

         for(int i = 1; i < folder.size(); i++) {
              
              string curr = folder[i];
              string last = ans.back();
              last += '/';
                
            //if curr folder is sustring of last folder and start at idx 0
              if(curr.find(last) != 0){
                 ans.push_back(folder[i]);
              }

         }

       return ans;
    }
};

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>ans;
        unordered_set<string>st;

        for(auto temp : folder){
              st.insert(temp);
        }

    for(string& str : folder){        
         int flag = 1;
        string temp1  = str;
         while(!str.empty()){
              auto idx = str.find_last_of('/');
               string temp = str.substr(0,idx);
               if(st.find(temp) != st.end()){
                    flag = 0;
                    break;
               }
         }
         if(flag == 1)ans.push_back(temp1);
    }
    return ans;
    }
};
