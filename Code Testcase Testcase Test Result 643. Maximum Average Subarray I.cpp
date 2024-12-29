class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k){
        
         int n  = nums.size();
         if(n == 1) return nums[0]*1.00000;
        
      
         int sum = 0;
         int i = 0 , j = k-1;
           
          for(int i = 0 ; i < k ; i++){
                sum += nums[i];
          }
          
             double val = sum;

             for(int i = 1; i <= n-k ; i++){
                  
                  sum -= nums[i-1];
                  sum += nums[k+i-1];

                  val = max(val,double(sum));
             }
    
            return val/k;
    }
};

TLE*************
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k){
        
         int n  = nums.size();
         if(n == 1) return nums[0]*1.00000;
        
         double val = 0;
         int i = 0 , j = k-1;
         val = INT_MIN*1.00000;
         
         while(j < n){               
                 double sum = 0;               
                 for(int y = i ; y <= j ; y++){
                   sum += nums[y];
                 }
                  val = max(double(val),double(sum));
                  j++;
                  i++;
         }

        return val/k;
    }
};
