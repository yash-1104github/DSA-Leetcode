class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
         if(n==1)return 0;
         
         sort(nums.begin(),nums.end());
         unordered_map<int,int>mp;

         for(int num: nums){
              mp[num]++;
         }

         if(mp.size()==1)return 0;
         
         int len = 0, max_len=0, i = 0, j = 1;
         while(j < n){
              if(nums[j]-nums[i]==1){
                  len = mp[nums[j]] + mp[nums[i]];
                  max_len = max(max_len,len);
              }
              i = j;
              j++;
         }
         
        return max_len;
    }
};

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
         if(n==1)return 0;
         int len = 0, max_len = 0;
         sort(nums.begin(),nums.end());
         unordered_map<int,int>mp;

         for(int num: nums){
              mp[num]++;
         }

         if(mp.size()==1)return 0;
         
         for(auto i = mp.begin(); i != mp.end(); i++){
               if(mp.find(i->first + 1) !=  mp.end()){
                    len = i->second + mp[i->first + 1];
                    max_len = max(max_len,len);
               }
         }
         
        return max_len;
    }
};
