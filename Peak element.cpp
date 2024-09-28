//optimal
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n == 1)return 0;
       if(arr[0] >= arr[1]) return 0;
       if(arr[n-1] >= arr[n-2]) return n-1;
       
       for(int i = 1 ; i < n-1; i++){
           if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
               return i;
           }
       }
       return {};
    }
};


//brute
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n == 1) return 0;
       else if(n == 2) {
           if(arr[0] >= arr[1]){
               return 0;
           } 
           return 1;
       }
       int i = 1;
       while(i < n - 1){        
            if(arr[0] >= arr[1]){
                return 0;
            }
            else if(arr[n-1] >= arr[n-2]){
                 return n-1;
            }
            else if(arr[i-1] <= arr[i] && arr[i] >= arr[i+1]){
                return i;
            }
            i++;
       }
    return {};
    }
};
