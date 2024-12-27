class Solution {
public:
    string reverseVowels(string s) {

       vector<char>temp;
       unordered_set<char>st;
        
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');

       int n = s.size();

       for(int i = 0; i < n; i++){
             
         if(st.find(s[i]) != st.end()){
               char ch = s[i];
               temp.push_back(ch);
         }

       }

        reverse(temp.begin(), temp.end());
         int  i = 0 , j = 0 , m = temp.size();
            
        while(i < n && j < m){
              
             if(st.find(s[i]) != st.end()){
                s[i] = temp[j];
                j++;
         }
             i++;
        }

        return s;
    }
};
