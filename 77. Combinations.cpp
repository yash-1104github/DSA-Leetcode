class Solution {
public:
    vector<vector<int>>result;
    void solve(int start , int &n ,  vector<int>& temp  , int k){
        if(k == 0 ){
            result.push_back(temp);
            return;
        }     
        if(start > n){
            return;
        }
        temp.push_back(start);
        solve(start + 1 , n ,  temp ,k-1);
        temp.pop_back();
        solve(start + 1, n , temp , k);
    }
    
    vector<vector<int>> combine(int n, int k) {
      vector<int>temp;
      solve(1 ,n, temp, k );
       return result; 
    }
};
