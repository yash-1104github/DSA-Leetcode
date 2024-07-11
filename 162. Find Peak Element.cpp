TC = O (nlogn) 
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int low = 0 , high = nums.size()-1;
        while(low < high) {
            int mid = (low + high)/2;
            if(nums[mid] > nums[mid+1]) high = mid;
            else low = mid + 1 ;
        }
        return low;
    }
};

TC  = O (n)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       return max_element(nums.begin() , nums.end()) - nums.begin() ;
    }
};

TC = O(n)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() , ind = 0;
        for(int i  = 0; i < n-1 ; i++){
                if(nums[i] >  nums[i+1] ) return i;            
        }
        return n-1;
    }
};

