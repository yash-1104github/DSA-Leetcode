//brute
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), maxIdxRe = 0;

        for(int i  = 0 ; i < n ; i++){
            
            if(nums[0] == 0 && n > 1) return false;
            
             maxIdxRe = max(maxIdxRe,nums[i]+i);
            
            if(maxIdxRe >= n-1){
                break;
            }
            if(nums[maxIdxRe] == 0 && n > 1 && i != n-1 && i == maxIdxRe) return false;
        }
            return true;
    }
};

//optimal greedy
class Solution {
public:
    bool canJump(vector<int>& nums) {
        //greedy
        
        int n = nums.size(), maxIdxRe = 0;
          //if iterator goes beyond the react limit reuturn false 
        for(int i  = 0 ; i < n ; i++){
            
            if(i > maxIdxRe) return false;
            
             maxIdxRe = max(maxIdxRe,nums[i]+i);

        }
            return true;

    }
};
