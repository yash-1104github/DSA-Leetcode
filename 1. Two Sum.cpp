class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
             mp[nums[i]] = i;
        }
        for(int i = 0;i<n;i++){
            int complement  = target - nums[i];
            if(mp.find(complement)!=mp.end() && mp[complement]!= i){
                return {i,mp[complement]};
            }
        }
        return {};
    }
};


Brute-force approach:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(),sum =0;
        for(int i = 0;i<n;i++){
           for(int j = i+1; j<n;j++){
              if(target==(nums[i]+nums[j])){
                return {i,j}; 
               }
           }
        }
        return {};
    }
};


