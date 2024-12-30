class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        int n = word1.size() , m = word2.size();

        if(n != m ) return false;

        vector<int>temp1(26,0);
        vector<int>temp2(26,0);
         
         for(auto c : word1){
             temp1[c - 'a']++;
         }

         
         for(auto c : word2){
             temp2[c - 'a']++;
         }

         for(int i = 0 ; i < 26 ; i++) {
             if(temp1[i] != temp2[i] && (temp1[i]==0 || temp2[i] == 0)){
                return false;
             }
         }
         
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
           
       return temp1 == temp2;



    }
}; 

class Solution {
public:
    bool closeStrings(string word1, string word2) {     
        int n = word1.size() , m = word2.size();
        if(n != m ) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>temp1;
        vector<int>temp2;
        for(int i = 0 ;i < n ; i++){
              mp1[word1[i]]++;
        }
        for(auto it : mp1){
              temp1.push_back(it.second);
        }
        for(int i = 0 ; i < m ; i++){
            mp2[word2[i]]++;
        }

        for(auto it : mp2){
           temp2.push_back(it.second);
        }

      

  if(mp1.size() != mp2.size()){
    return false;
  }
  
        for(int i  = 0 ; i < m ; i++){
                
                if(mp1.find(word2[i]) == mp1.end() ){
                    return  false;
                }
        }
        
        for(int i  = 0 ; i < n ; i++){              
                if(mp2.find(word1[i]) == mp2.end() ){
                    return  false;
                }
        }

        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
      
   return temp1 == temp2;
    }
}; 
