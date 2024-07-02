TC = O(N)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n = nums1.size() , m = nums2.size();
        unordered_map<int,int>mp;
        
        for(int i = 0;i <n;i++){
            mp[nums1[i]]++;
        }
        
        for(int i = 0; i < m;i++){
            if(mp[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        } 
        return ans;
    }
};

//TC = O(NlonN)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n = nums1.size() , m = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0 , j = 0;
        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else j++;
        }
        return ans;
    }
};
