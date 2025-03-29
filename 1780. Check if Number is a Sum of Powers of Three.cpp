class Solution {
public:
    bool checkPowersOfThree(int n) {
        //ternary representation 0,1 
        //if  2 comes in rem then val will not be divided
        while(n > 0){
            if(n%3==2)return false;
            n = n/3;
        }
        return true;
    }
};
