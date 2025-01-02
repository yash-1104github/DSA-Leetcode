 class Solution {
 public:
     vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

         vector<int>ans;
         long n = spells.size(), m =  potions.size() ;

         sort(potions.begin(), potions.end());

         for(int  i = 0 ; i < n ; i++){
               int cnt = 0;
               //ceil value
               long required_potion = (success+spells[i]-1)/spells[i];
                int m = 0 , k = potions.size()-1;
                auto it = lower_bound(potions.begin(),potions.end(), required_potion);
                cnt = potions.end()-it;
               ans.push_back(cnt);
         }
         return ans;
     }
 };
