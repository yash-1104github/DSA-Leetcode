class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        if(n == 1) return 1;
         int ans = 0;
        vector<string>temp1 = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
                            ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
                             ".--","-..-","-.--","--.."};

                unordered_set<string>st;
            for(auto temp : words){
                   string temp2 ;
                  for(int i = 0; i < temp.size(); i++){
                         int idx = temp[i] - 'a';
                         temp2 += temp1[idx];
                 }
                  if(st.find(temp2) == st.end()){
                        st.insert(temp2);
                        ans++;
                  }       
            }


              return ans;
    }
};
