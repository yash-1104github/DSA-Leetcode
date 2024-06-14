class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<int> freq(*max_element(nums.begin(),nums.end()) + n + 1,0);
        for(int val : nums){
            freq[val]++;
        }
        for(int i =0;i< freq.size();i++){
           if(freq[i]<=1) continue;
            int extra = freq[i] -1;
            freq[i+1] +=extra;
            ans += extra;
        }
        return ans;
    }
    
};
