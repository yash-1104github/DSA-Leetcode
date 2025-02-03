class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>mp;
        vector<string>ans;

        for(string str: cpdomains){
              
            int idx =  str.find(" ");
            int val = stoi(str.substr(0,idx));
            string temp = str.substr(idx+1);
             mp[temp] += val;

            for(int i = 0 ; i < temp.size(); i++){
                  if(temp[i] == '.'){
                       mp[temp.substr(i+1)] += val;
                  }
            }
           
        }

         for(auto it : mp){
                ans.push_back(to_string(it.second) + " " + it.first);
           }
         
         return ans;
        


    }
};
