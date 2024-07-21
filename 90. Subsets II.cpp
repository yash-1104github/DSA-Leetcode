class Solution {
public:
    
    void solve(int idx , vector<int> &temp , vector<int> &nums ,vector<vector<int>> &ans){
        
        if(idx >= nums.size()){     
            ans.push_back(temp);
            return;
            }
        
        temp.push_back(nums[idx]);
        solve(idx + 1 , temp , nums , ans);
        temp.pop_back();
        while(idx+1 < nums.size() && nums[idx] == nums[idx+1]) idx++;
        solve(idx + 1 ,temp , nums , ans);
        
    }
    
    vector<vector<int>>subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0 , temp , nums ,ans);
        
        return ans;
    }
};
