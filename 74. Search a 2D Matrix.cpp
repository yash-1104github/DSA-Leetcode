
TC = O (n * logm )
class Solution {
private: 
    bool binarySearch(vector<int> arr ,int n , int k){
        int low = 0 , high = n-1;
        while(low <= high){
            int mid = (low + high)/2;
             if(arr[mid] == k) return true;
             else if (arr[mid] < k ) low  = mid + 1;
             else   high = high -1 ;
            }
            return false;
        }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() , n = matrix[0].size();
        for(int i = 0 ; i< m ;i++){
            if (binarySearch(matrix[i], n ,target)) {
                return true;
            }   
        }
        return false;
    }
};
TC = O(n*n)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() , n = matrix[0].size();
        for(int i = 0 ; i< m ;i++){
            for(int  j = 0; j < n; j++){
                if(matrix[i][j] == target) return true;
            }
        }
        return false;
    }
};
