class Solution {
public:
    //kadance algo
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),maxsum = INT_MIN,  currsum = 0; ;           
            for(int i = 0 ; i < n ; i++){
                currsum += nums[i];
                maxsum = max(maxsum,currsum);
                if(currsum < 0){
                    currsum = 0;
                }
            }
        return maxsum;
    }
};
