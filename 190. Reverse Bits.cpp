class Solution {
public:
    bool isbitOne(uint32_t n , int k){
        if(((1 << (k-1)) & n) != 0 ) return true;
        return false;
    }
        
    uint32_t reverseBits(uint32_t n) {
        int ans = 0 ;
        for(int i = 1; i <= 32 ; i++){
            if(isbitOne(n,i)){
                ans = 1<< (32 -i) | ans ;
            }
        }
        return ans;
    }
};
