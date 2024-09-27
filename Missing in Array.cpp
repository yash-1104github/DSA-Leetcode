class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        int sum = 0;
        for(int i = 0; i < arr.size() ; i++){
            sum += arr[i];             
        }
        
        long long  total = (n*(n+1))/2;
        
        return abs(total-sum);
        
    }
};
