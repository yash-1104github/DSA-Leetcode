class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int i = 0 , j = n-1;
        int area = 0;
        
        int left = height[i];
        int right = height[j];

        while( i < j){

              int val = min(height[i],height[j])*(j-i);
               area =  max(area,val);
              
               if(height[i] <= height[j]) i++;
               else{
                j--;
               }
        }
           return area;

    }
};

class Solution {
public:
    int maxArea(vector<int>& height) {
          int area = 0 , max_area = 0;
          int right = height.size() - 1 , left = 0 ;
         
         while(left < right){
             int length = right - left;
             int breath = min(height[left],height[right]);
             area = length*breath;
             max_area = max(max_area,area);
         
         if(height[left] < height[right] ){
             left++;
         }
        else {
            right--; 
           }
         }
        return max_area;
    }
};
