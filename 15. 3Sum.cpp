

//BRUTE FORCE ---> RUNTIME ERROR :/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int  n = nums.size(),i=0;
        sort(nums.begin(),nums.end());      
        vector<vector<int>>ans;
         
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                for(int k  = j+1 ; k <n; k++){  
                    if(nums[i]+nums[j]+nums[k] == 0) {    
                        ans.push_back({nums[i],nums[j],nums[k]});     
                    }
                }
            }
        }
        vector<vector<int>>res;
        for(int i = 0 ; i < ans.size(); i++){
            if(ans[i] == ans[i+1])continue;
            res.push_back(ans[i]);
        }
        return res;
    }
};


