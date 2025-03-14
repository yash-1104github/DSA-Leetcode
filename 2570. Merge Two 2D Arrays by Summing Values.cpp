class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
       vector<vector<int>>ans;
        int n = nums1.size();
        int m = nums2.size();

        int i = 0, j = 0;

        while(i < n && j < m){
             if(nums1[i][0] == nums2[j][0]){
                 ans.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                 i++;
                 j++;
             }
             else if(nums1[i][0] < nums2[j][0]){
                  ans.push_back({nums1[i][0],nums1[i][1]});
                  i++;
             }
             else{
                ans.push_back({nums2[j][0],nums2[j][1]});
                j++;
             }
        }

         while(i < n){
            ans.push_back({nums1[i][0],nums1[i][1]});
            i++;
        }

        while(j < m){
            ans.push_back({nums2[j][0],nums2[j][1]});
            j++;
        }

     return ans;

    }
};


class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
       vector<vector<int>>ans;
        int n = nums1.size();
        int m = nums2.size();

        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(int i = 0 ; i < n ; i++){
            mp1[nums1[i][0]] = nums1[i][1];
        } 

        for(int j = 0; j < m ; j++){
            mp2[nums2[j][0]] = nums2[j][1];
        }

        int i = 0, j = 0;

        while(i < n && j < m){
             if(nums1[i][0] == nums2[j][0]){
                 int val1 = mp1[nums1[i][0]] + mp2[nums2[j][0]];
                 ans.push_back({nums1[i][0],val1});
                 i++;
                 j++;
             }
             else if(nums1[i][0] < nums2[j][0]){
                  int val2 = mp1[nums1[i][0]];
                  ans.push_back({nums1[i][0],val2});
                  i++;
             }
             else{
                int val3 = mp2[nums2[j][0]];
                ans.push_back({nums2[j][0],val3});
                j++;
             }
        }

         while(i < n){
            ans.push_back({nums1[i][0],mp1[nums1[i][0]]});
            i++;
        }

        while(j < m){
            ans.push_back({nums2[j][0],mp2[nums2[j][0]]});
            j++;
        }

     return ans;

    }
};
