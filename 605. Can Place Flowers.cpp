class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
         if(m==1 && n==0)return true;
         if(m==1 && n > 1)return false;
         if(m==1 && n==1 && flowerbed[0] == 0) return true;
         if(m==1 && n==1 && flowerbed[0] == 1) return false;

         if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            n--;
         }

         for(int i = 1; i < m-1; i++){
             if(flowerbed[i] ==0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                n--;
             }
        }

        if(flowerbed[m-1] == 0 && flowerbed[m-2] == 0) {
            n--;
        }

      if(n <= 0) return true;
      return false;
    }
};
