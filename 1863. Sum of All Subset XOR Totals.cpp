class Solution {
public:
    vector<vector<int>>result;

    void solve(vector<int>& nums,int i, vector<int>& temp){
           int n = nums.size();
           if(i >= n){
              result.push_back(temp);
              return;
           }           
           temp.push_back(nums[i]);
           solve(nums,i+1,temp);
           temp.pop_back();
           solve(nums,i+1,temp);
    }

   
    int subsetXORSum(vector<int>& nums) {
        vector<int>temp;
        solve(nums,0,temp);
        int ans = 0;

         for(int i =  0; i < result.size(); i++){
              if(result[i].size()==0)continue;
              else{
                   int sum = 0;
                   for(int num : result[i]){
                       sum = sum ^ num; 
                   }
                   ans += sum;
              }
          }
        return ans;
    }
};
