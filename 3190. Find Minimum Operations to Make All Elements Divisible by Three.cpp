class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int cnt = 0;
        for(int i = 0 ; i< nums.size();i++){
            cnt  +=  min(nums[i] % 3 , 3 - (nums[i] % 3));
        }
        return cnt;
    }
};

