class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         int n = numbers.size();
         int left = 0 , right = n-1; 
         while(left <= right){
             int val = (numbers[left] + numbers[right]) ;
             if(val  == target) break;
             else if(val > target) {
                 right --;
             }
            else left++;
        }
        return {left+1, right+1};
    }
};
