class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size() , cnt = 0;
        int i = 0 , j = i+1;
        while(i < n && j < n){       
           for(int j = i+1 ; j < n; j++){
                if( i < j && nums[i] == nums[j]){
                    cnt++;
                }      
              }
           i++;
        }
        return cnt;
    }
};
