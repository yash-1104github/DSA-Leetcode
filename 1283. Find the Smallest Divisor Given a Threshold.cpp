TC = O(n)
class Solution {
private:
    int SumbyD(vector<int>& nums,int d){
        int sum = 0 ;
        for(int i = 0;i <nums.size();i++){
            sum += ceil((double)(nums[i])/(double)(d));
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(), high = *max_element(nums.begin(),nums.end()) ,low = 1 ,ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(SumbyD(nums,mid) <= threshold) {
                 ans  = mid;
                high = mid -1;
            }
            else low = mid + 1;
        }
        return ans;       
    }
};

//TC = O (max*n)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(), maxi = 0;
        for(int i = 0;i <n ;i++){
            maxi = max(maxi,nums[i]);
        }
        for(int d = 1 ; d <= maxi; d++){
            int sum = 0;
            for(int i = 0 ; i< n;i++){
               sum += ceil((double)(nums[i]) / (double)(d));
            }
             if(sum <= threshold) return d;
        }
        return -1;
    }
};
