class Solution {
public:
    string addBinary(string a, string b) {
        string s ;
        int c = 0 ,sum = 0; 
        int i = a.size()-1 , j = b.size()-1;
        
        while(i >= 0 || j >= 0 ){
           sum = c;
            if(i>=0){
                //convert string to integer by -'0'
                sum += a[i] - '0';
            }
            if(j >=0){
                sum += b[j] - '0';
            }
            //convert interger sum to string by +'0'
            s.push_back(sum%2 + '0');
            c = sum /2;
            i-- , j--;
         }
        // for case if only carry left case 11 + 11 =>  110
        if(c != 0) s.push_back('1');
            reverse(s.begin(),s.end());

        return s;
    }
};
