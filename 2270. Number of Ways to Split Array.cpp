class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size() , ans = 0;
        long long left_sum = nums[0];
        long long right_sum = 0;

        for(int i = 1 ; i  < n ; i++){            
              right_sum += nums[i];
        }

        if(left_sum >= right_sum){
            ans++;
        };

         for(int i = 1 ; i < n-1; i++){             
             left_sum += nums[i];
             right_sum -= nums[i];
             if(left_sum >= right_sum){
                ans++;
             }
         }
          return ans;
    }
};

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long int>leftsum(n,0);
        vector<long int>rightsum(n,0);
        leftsum[0] = nums[0];

         for(int i = 1 ; i < n; i++){             
              leftsum[i] = leftsum[i-1] + nums[i];               
         }

         rightsum[n-1] = nums[n-1];
         for(int i = n-2 ; i >= 0 ; i--){         
               rightsum[i] = rightsum[i+1] + nums[i];
         }

           int ans = 0;
           for(int i = 0 ; i < n-1 ; i++){
               if(leftsum[i] >= rightsum[i+1]){
                   ans++;
               }
           }
    return ans;
    }
};
