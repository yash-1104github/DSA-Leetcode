class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
         int n = dominoes.size();
          map<pair<int, int>, int>mp;
         int ans = 0;
         for(int i = 0 ;  i < n; i++){
             if(dominoes[i][0] > dominoes[i][1]){
                 swap(dominoes[i][0],dominoes[i][1]);
              }
              mp[pair{dominoes[i][0],dominoes[i][1]}]++;
         }

         for(auto it: mp){
            if(it.second > 1){
                 ans += (it.second*(it.second-1))/2; //total number of pair formed from count nC2
            }
         }
       return ans;
    }
};


class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
         int n = dominoes.size();
         //dominoes[i] = [a, b] , dominoes[j] = [c, d];
         //a == c and b == d 
         //a == d and b == c
         //.first and .second only exist on std::pair, not std::vector.
         int ans = 0;
         
        // nums[0][0] => 1, nums[0][1] => 2, nums[1][0] => 2, nums[1][1] => 1
        // nums[2][0] => 3, nums[2][1] => 4, nums[3][0] => 5, nums[3][1] => 6

     int j = 0;
     while(j < n){
         for(int i = j+1 ; i < n; i++){
            if((dominoes[j][0]==dominoes[i][0] &&  dominoes[j][1] == dominoes[i][1])
              || (dominoes[j][0]==dominoes[i][1] && dominoes[j][1] == dominoes[i][0])){
                 ans++;
            }
        }
        j++;
     }
       return ans;
    }
};
