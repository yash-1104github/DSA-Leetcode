class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         
         vector<vector<int>>ans;
         vector<int>ans1;
         vector<int>ans2;
         int n = nums1.size(), m = nums2.size();

         unordered_map<int,int>mp1;
         unordered_map<int,int>mp2;

         for(int i = 0 ; i < n ; i++){
               mp1[nums1[i]]++;
         }

         for(int j = 0 ; j < m ; j++){
               mp2[nums2[j]]++;
         }
        
         for(auto it : mp1){
              
            if(mp2.find(it.first) == mp2.end()){
                     ans1.push_back(it.first);
            }
         }  

         ans.push_back(ans1);

         for(auto it : mp2){
            if(mp1.find(it.first) == mp1.end()){
                     ans2.push_back(it.first);
            }
         }  
          
            ans.push_back(ans2);
         
    

return ans;
    }
};
