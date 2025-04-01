class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
         int n = nums.size();
          string temp;
          for(int i = 0 ; i < n; i++){
               if(nums[i][i] == '1') temp = temp+ '0';
               else {
                temp = temp + '1';
               }
          }
           return temp;

    }
};
