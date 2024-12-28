class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        int i = 0 , j = 0;
        int cnt = 0;

        while(i < n && j < n){

               if(nums[i] == 0){
                   cnt++;
                   i++;
               } 
                
                  else{
                    nums[j] = nums[i]; 
                   j++;
                   i++;
                  }
              
        }

       while(j < n){
        nums[j] =  0;
        j++;
       }

    }
};
