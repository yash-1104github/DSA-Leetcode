class Solution {
public:
     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
       vector<int>ans = nums;

       sort(ans.begin(),ans.end());

       unordered_map<int,int>mp;

       for(int i = 0 ; i < n ; i++){
            if(mp.find(ans[i]) == mp.end()){
                mp[ans[i]] = i;
            }
       }
      
      for(int i = 0; i < n ; i++){
           nums[i] = mp[nums[i]];
      }

       
      return nums;
    }
};
