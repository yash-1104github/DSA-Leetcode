class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        //max of subarray sum => Kadance Algorithm

        int curr_sum = nums[0];
        int max_sum1 = nums[0];

        for(int i  = 1; i < n; i++){
            curr_sum = max(curr_sum+nums[i],nums[i]);
            max_sum1 = max(max_sum1,curr_sum);
        }

         curr_sum = nums[0];
        int max_sum2 = nums[0];

        for(int i = 1 ; i < n; i++){
            curr_sum = min(curr_sum+nums[i],nums[i]);
            max_sum2 = min(max_sum2,curr_sum);
        }
         
         return max(abs(max_sum1), abs(max_sum2));
        
    }
};
