class Solution {
public:
    bool check(vector<int>& nums) {
     int n = nums.size();

     vector<int>arr(n);
     for(int i= 0; i< n; i++){
        arr[i]  = nums[i];
     }

     sort(begin(nums),end(nums));
     

     for(int r = 0; r < n; r++){
        bool isSame = true;
        for(int i = 0; i < n ; i++){
             if(nums[i] != arr[(i+r)%n]){
                isSame = false;
                break;
             }
        }
        if(isSame == true)return true;
     }

      return false;
    }
};
