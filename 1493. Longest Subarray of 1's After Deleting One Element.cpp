class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j = 0, len = 0, lastIndexofZero=-1;

        while(j < n){
            if(nums[j] == 0){
                i = lastIndexofZero + 1;
                lastIndexofZero = j;
            }
            j++;
            len = max(len,j-i-1);
        }
        return len;
    }
};

class Solution {
public:
    int findlen(vector<int>& nums, int idx){
         int currlen = 0, maxlen = 0;
         for(int i = 0 ; i < nums.size(); i++){
                  
              if(i == idx){
                    continue;
              }
              if(nums[i] == 1){
                 currlen++;
                 maxlen = max(maxlen,currlen);
              }
              else{
                     currlen = 0;
              }
         }
         return maxlen;
    }

    int longestSubarray(vector<int>& nums){
        int n = nums.size(), len = 0, cnt = 0;        
         for(int i = 0 ; i < n ; i++){
              if(nums[i] == 0){
                    cnt++;
                    len = max(len,findlen(nums, i));
              }
        }

        if(cnt == 0) return n-1;
        return len;
    }
};
