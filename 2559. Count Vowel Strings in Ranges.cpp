class Solution {
public:

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int n = words.size();
         vector<int>ans;
         vector<int>cnt(n,0);
         unordered_set<char>st = {'a', 'e', 'i', 'o', 'u'};
         
         for(int i = 0 ; i < n ; i++){
                string temp = words[i];
                int m = temp.size();
                 
                 if(st.find(temp[0]) != st.end() &&
                    st.find(temp[m-1]) != st.end()){
                     cnt[i] = 1;
                }
         }

         vector<int>prefSum(n,0);
         if(cnt[0] == 1){
            prefSum[0] = 1;
         }
         for(int i = 1 ; i < n; i++ ){
            prefSum[i] = prefSum[i-1] + cnt[i];
         }

           for(int i = 0 ; i < queries.size(); i++){ 
               
                if(queries[i][0] == 0){
                    ans.push_back(prefSum[queries[i][1]]);
                }
                else{
                    ans.push_back(prefSum[queries[i][1]]-prefSum[queries[i][0]-1]);
                }
           }
    return ans;      
   }
};

class Solution {
public:

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int n = words.size();
         vector<int>ans;
         vector<int>cnt(n,0);
         unordered_set<char>st = {'a', 'e', 'i', 'o', 'u'};
         
         for(int i = 0 ; i < n ; i++){
                string temp = words[i];
                int m = temp.size();
                 
                 if(st.find(temp[0]) != st.end() &&
                    st.find(temp[m-1]) != st.end()){
                     cnt[i] = 1;
                }
         }

           int k = queries.size();
           for(int j = 0 ; j < k ; j++){
                vector<int>range = queries[j];  
                int l = range[0];
                int r = range[1]; 
                int sum = 0 ;
                for(int p  = l ; p <= r ; p++){
                      sum += cnt[p];
                }
                ans.push_back(sum);
           }
    return ans;      
   }
};
