
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {      
     
      int ans1 = 0;
      int n = nums1.size();
      int m = nums2.size();

      if(n%2 == 0 && m%2 == 0 )return 0 ;
      for(int i = 0; i < nums1.size(); i++) {          
            ans1 = ans1 ^ nums1[i];
      } 
      
      int ans2 = 0;
      for(int j = 0 ; j < nums2.size() ; j++) {               
                  ans2 = ans2 ^ nums2[j];
            }

        if(nums1.size() % 2 == 0 && nums2.size() % 2 != 0 ){
              return ans1;
        }

        if(nums2.size() % 2 == 0 && nums1.size() % 2 != 0 ){
              return ans2;
        }
    
     return ans1^ans2;
    }
};

