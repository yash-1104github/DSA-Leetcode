class Solution {
public:
     
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int>ans(n,1);
    
      int left = 1, right = 1;

       
        for(int i = 0 ; i < n ; i++){
               ans[i] *= left;
               left *= nums[i];
        }
            
            for(int j = n-1 ; j >= 0 ; j--){
                ans[j] *= right;
                right *= nums[j];
            }
            
          return ans;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        //prefix sum
        for(int i = 1; i < n ; i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        int suffixsum = 1;
        for(int i = n -2 ; i >= 0; i--){
            suffixsum = suffixsum*nums[i+1];
            ans[i] = ans[i]*suffixsum;
        }
        return ans;
    }
};
