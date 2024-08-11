//BIT MANIPULATION
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n =  nums.size();
        int subset = (1 << n);
        for(int j = 0 ; j < subset ; j++){
            vector<int>temp;
            for(int i = 0 ; i < n ; i++){
                if(j & (1 << i)){
                    temp.push_back(nums[i]);
                }
            }
          ans.push_back(temp);
        }
         return ans;
    }
};

//BACKTRACKING
class Solution {
public:
     vector<vector<int>>result;
     void solve(vector<int>& nums , vector<int>& temp , int i){
        int n = nums.size();
          if(i >= n ){
            result.push_back(temp);
              return;
        }
        temp.push_back(nums[i]);
        solve(nums , temp , i+1);
        temp.pop_back();
        solve(nums , temp , i+1); 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
         solve(nums , temp , 0);
        return result;
    }
};
