class Solution {
public:
    double minimumAverage(vector<int>& nums){
        int n =nums.size();
        sort(nums.begin(),nums.end());
      int l = 0, r = n-1;
        double ans = 10000; 
       while(l<r){
           double k  = (nums[l] + nums[r])/(2*1.0);
          ans = min(ans,k);
           l++;
           r--;
        }        
         return ans;
    }
};
