class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(),lastelement = INT_MIN ,longestcnt = 1 ,currentcnt = 0;
        if(n == 0) return 0;
        if(n == 1) return 1;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if( nums[i] - 1 == lastelement) {
              currentcnt++;      
         }  
            else if (nums[i] != lastelement){
                currentcnt = 1;
            }
             lastelement = nums[i];
             longestcnt =  max(longestcnt,currentcnt); 
        }
        return longestcnt ;
    }
};
