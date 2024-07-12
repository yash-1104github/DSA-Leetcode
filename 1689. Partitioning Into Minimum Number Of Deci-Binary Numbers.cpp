class Solution {
public:
    int minPartitions(string n) {
        int len = n.size();
        int max_digit = 0;
        for(auto c : n){
            // here '3' is a character and its ascii value is 51 
            // for char '0'it is 48
          int  no = c - '0' ;
         max_digit = max(max_digit , no);
        }
        return max_digit;
    }
};
