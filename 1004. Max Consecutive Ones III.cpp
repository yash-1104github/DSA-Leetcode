class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int MaxLen = 0,left = 0, right = 0 ,n = nums.size(),zerosCount =0;
        
        while(right<n){
            if(nums[right]==0)
                zerosCount++;
            if(zerosCount>k){
                if(nums[left]==0) zerosCount--;
                    left++;
            }
            if(zerosCount<=k){
                int len = right-left+1;
                MaxLen = max(MaxLen,len);
                }
             right++;
        }
        return MaxLen;
    }
};
