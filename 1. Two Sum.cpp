//optimal
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mp;
        
        for(int i = 0 ;  i < nums.size(); i++){
            int a = nums[i];
            int more = target - a;
            //first check if more exit in mp before adding a to mp 
            if(mp.find(more) != mp.end()){
                return {i, mp[more]};
            }
            //if not then add a to mp and iterate to next
            
            mp[a] = i;
              
        }
         
        return {};
    }
};







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


//wrong ans for case [3,3]  tar = 6 becoz both 3 will mp to same idx
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
             mp[nums[i]] = i;
        }
        sort(nums.begin(),nums.end());
        int i = 0 , j = n-1;
        
        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum > target){
                 j--;
            }
            else if(sum == target){
                 break;
            }
             else {
                 i++;
             } 
        }
          vector<int>ans;
            
            if(mp.find(nums[i]) != mp.end() ){
                 ans.push_back(mp[nums[i]]);
            }
            if(mp.find(nums[j]) != mp.end()){
                 ans.push_back(mp[nums[j]]);
            }

        
        return ans;
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


