 class Solution {
 public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {            

         vector<int>ans;
         int n = A.size(), cnt = 0 ;

         vector<int>freq(n+1,0);  
      
          for(int i = 0 ; i < n ; i++){

              freq[A[i]]++;
              freq[B[i]]++;

              if(freq[A[i]]==2) cnt++;
              if(freq[B[i]]==2 && A[i] != B[i]) cnt++;
        
              ans.push_back(cnt);        
        } 

        return ans; 
     }
};
