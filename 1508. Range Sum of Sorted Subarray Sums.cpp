class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>temp;
        int ans = 0 ;
        //maximum value int datatype can store is 10^9;
        int mod = 1e9 + 7;
        for(int i = 0 ; i < n ; i++){
            int sum = 0; 
            for(int j = i ; j <  n ; j++){
                sum += nums[j];
                temp.push_back(sum);
            }
        } 
         sort(temp.begin(),temp.end());
        for(int i = left-1 ; i <= right-1 ; i++){
            ans =  (ans + temp[i]) %  mod;
        }
        return ans;
    }
};
