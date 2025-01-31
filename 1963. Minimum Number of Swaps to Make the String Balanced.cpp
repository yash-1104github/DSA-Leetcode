class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
         
         stack<char>st;

         for(auto c : s ){
                 if(c == '[' ){
                    st.push(c);
                 }
                if(c == ']'){
                     if(st.size() > 0){
                        st.pop();
                    }
              }
         }

         int ans = (st.size()+1)/2;
         return ans;
    }
};
