class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
       int n = nums.size();
        int cnt = 0;
       int i = 0 , j  = n-1;

       sort(nums.begin(),nums.end());
       while(i < j){      
        int val = nums[i] + nums[j];

        if( val == k){
            cnt++;
            i++;
            j--;
        }
        else if(val > k){
               j--;
        }
        else{
              i++;
        }
       }
return cnt;
    }
};

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
       int n = nums.size();
       int cnt = 0;

        for(int i = 0 ; i< n ; i++){
                  if(nums[i] == -1 ) continue;
            for(int j = i+1; j < n ; j++){
                    if(nums[j] == -1 ) continue;
                 if(nums[i]+nums[j] == k){
                     cnt++;
                     nums[i] = -1;
                     nums[j] = -1;
                     break;
                 }
            }
        }
     return cnt;
    }
};
