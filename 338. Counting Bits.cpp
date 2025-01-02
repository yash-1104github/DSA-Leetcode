class Solution {
public:

    vector<int> countBits(int n){     
       vector<int>ans;
            for(int i = 0 ; i < n+1; i++){
               int val = __builtin_popcount(i);
               ans.push_back(val);
            } 
       return ans;
    }
};

class Solution {
public:
    int countOne(int m){
        int cnt = 0;
        while(m > 0){
                  int rem = m%2;
                  if(rem == 1){
                    cnt++;
                  }
                  m  = m/2; 
            }
        return cnt;  
    }
    
    vector<int> countBits(int n){     
       vector<int>ans;
            for(int i = 0 ; i < n+1; i++){
               int val = countOne(i);
               ans.push_back(val);
            } 
       return ans;
    }
};
