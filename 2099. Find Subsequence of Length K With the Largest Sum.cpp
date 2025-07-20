class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
        vector<int>ans;
        vector<int>temp = nums;
        multiset<int>st; // to insert same value mupltiple time
        
        sort(temp.begin(), temp.end());

        int j = n-1;

        while(k != 0){
               st.insert(temp[j]);
               j--;
               k--;
        }

        for(int i = 0 ; i < n; i++){
              if(st.find(nums[i])!= st.end()){
                 ans.push_back(nums[i]);
                 st.erase(st.find(nums[i])); //remove only one occurence of value
              }
        }

        return ans;
    }
};2099. Find Subsequence of Length K With the Largest Sum
