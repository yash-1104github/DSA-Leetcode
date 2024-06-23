 //set store elements in sorted order to find min or max simply use *set.rbegin() = max and *set.begin() = min elements.  window length = right -left +1;
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
       
        multiset<int>window;
        int maxLen = 0,left = 0, n = nums.size();
        for(int right = 0;right<n;right++){
            window.insert(nums[right]);
            while(*window.rbegin() - *window.begin()>limit){
                window.erase(window.find(nums[left]));
                left++;
            }
             maxLen = max(maxLen,right- left +1);               
        }
        return maxLen;
    }
};
