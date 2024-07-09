class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() , n  = nums2.size() ;
        int s = m + n ;
        int i = 0 , j = 0 ;
        vector<int>arr;
        while( i < m && j < n){
            if(nums1[i] < nums2[j] ){
                arr.push_back(nums1[i++]);
            }
            else 
                arr.push_back(nums2[j++]);
        }
        while(i < m){
            arr.push_back(nums1[i++]);
        }
        while(j < n){
            arr.push_back(nums2[j++]);
        }
        if( s % 2 == 1) {
            return (double)arr[s/2];
        }
        return  double(arr[s/2] + arr[s/2 -1])/2.0;
    }
};
