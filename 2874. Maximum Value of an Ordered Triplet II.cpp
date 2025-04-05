class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long  ans = -1;
       
         vector<int>leftsum(n,0);
         vector<int>rightsum(n,0);

         for(int i = 1; i < n; i++){
              leftsum[i] = max(leftsum[i-1],nums[i-1]);
         }

         for(int k = n-2; k >=0; k--){
              rightsum[k] = max(rightsum[k+1],nums[k+1]);
         }

         for(int j = 1; j < n-1; j++){
               long long val1 = (long long)(leftsum[j]-nums[j])*rightsum[j];
               if(val1 > ans){
                  ans = val1;
               }
         }

        if(ans < 0) return 0;
        return ans;
    }
};
