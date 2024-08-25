class Solution {
  public:
    long long cntGood(string S) {
        //find all the substring of S
        //convert the substring to integer 
        //check the integer odd or even 
        long long n = S.size();
        int cnt = 0;
        for(int i = 0; i <  n ; i++){
            for(int j = 1 ; j <= (n-i); j++){
                string temp = S.substr(i,j);
                 // Check if the substring starts with zeros
                if (temp[0] == '0') {
                    // Skip this substring (leading zeros)
                    continue;
                }
                // stoll for large constrants and stoi for small 
                     long long l = stoll(temp);
                     if(l % 2 != 0 ) {
                     cnt++; 
                     }
            }
        }
        return cnt;
    }
};
