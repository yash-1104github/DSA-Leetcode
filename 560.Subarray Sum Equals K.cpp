TC = O(N)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(),cnt = 0,prefixSum = 0;
        map<int,int>mp;
        mp[0] = 1;
        for(int i = 0;i<n;i++){
           prefixSum += nums[i];
            int remove = prefixSum - k;
            cnt += mp[remove];
            mp[prefixSum] += 1 ;
        } 
       
        return  cnt;
    }
};
TC= O(N^2)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(),cnt = 0;
        for(int i =0;i<n;i++){
            int sum=0;
            for(int j = i;j<n;j++){
                    sum += nums[j];
                 if (sum == k) cnt++;
            }
               
       }
        return  cnt;
    }
};
