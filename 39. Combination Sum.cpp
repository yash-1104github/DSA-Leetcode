class Solution {
public: 
    void solve(vector<int>& candidates , vector<int>& temp , int target, int sum , int ind , vector<vector<int>>& ans){
     int n  = candidates.size();
        if(sum > target ){
        return;
    }    
    if(sum == target ){
        ans.push_back(temp);
        return ;
    }  
    for(int i = ind ; i< n ; i++){   
            temp.push_back(candidates[i]);
            sum += candidates[i];
         // i = ind to make it combination and prevent from permutation
            solve(candidates, temp, target, sum, i, ans);
            temp.pop_back();
            sum -= candidates[i];
        }   
  }   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
         vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates, temp, target, 0, 0, ans);      
        return ans;
    }
};
2nd way 

class Solution {
public: 
    void solve(vector<int>& candidates , vector<int>& temp , int target, int sum , int ind , vector<vector<int>>& ans){
         int n  = candidates.size();
        
        if(sum > target)  return;
    
        if(ind >= n){
         if(sum == target ){
            ans.push_back(temp);
         }
        return ; 
    }

            temp.push_back(candidates[ind]);
            sum += candidates[ind];
            solve(candidates, temp, target, sum, ind, ans);
            temp.pop_back();
            sum -= candidates[ind];
            solve(candidates, temp, target, sum, ind+1, ans);      
  }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
         vector<vector<int>>ans;
        vector<int>temp;
        
        solve(candidates, temp, target, 0, 0, ans);      
        return ans;
    }
};
