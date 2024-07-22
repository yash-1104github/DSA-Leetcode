class Solution {
public:
    void solve(int idx , int sum ,int k, int n , vector<int>& temp, vector<vector<int>>& ans){
         
        if(sum == n && k == 0) {
            ans.push_back(temp);
            return;
        }
        
        if(sum > n ) {
            return;
        }
       
   for(int i = idx ; i<= 9 ; i++){
       
        temp.push_back(i);
        solve(i + 1 , sum + i, k - 1, n ,temp , ans);
        temp.pop_back();
       
           }
        }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        
          solve(1, 0 , k,  n, temp, ans);
        
        
        return ans;
    }
};
