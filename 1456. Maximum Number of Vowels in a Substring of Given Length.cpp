class Solution {
public:
    int maxVowels(string s, int k) {
        
        int n = s.size();
        int cnt = 0;

        unordered_set<char>st = {'a','e','i','o','u'};

        for(int i = 0 ; i  < k ; i++){
              if(st.find(s[i]) != st.end()){
                cnt++;
            }

        }

        int val = cnt;
          
          for(int i = 1; i <= n-k ; i++){

              if(st.find(s[i-1]) != st.end()){
                   cnt--;
              }

               if(st.find(s[k+i-1]) != st.end()){
                   cnt++;
               }

               if(val < cnt){
                   val = cnt;
               }
          }

     return val;
    }
};
