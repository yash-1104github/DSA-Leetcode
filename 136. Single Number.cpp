class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr =0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        int ans = 0;
        for(auto it : mp){
            if(it.second == 1){
                ans += it.first;
            }
        }
        return ans;
    }
};
