class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n = arr.size(), sum = 0 , i = 0,ans = INT_MIN;
        
        while(i < n){
            
             sum += arr[i];
             ans = max(ans,sum);
            
            if(sum < 0){
                sum = 0;
            }
            i++;
        }
        return ans;
            
            
    }
};
