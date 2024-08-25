class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
         int shiftCnt = 0;
        //To make the left and right value eqaul becoz AND only give one when 1 & 1 
        while(left != right){
           left =   left >> 1 ;//deleteting non equal part
           right =    right >> 1;//deleteting non equal part
            shiftCnt++;
        }
        // left shift to place zeros in the digits which is removed 
        return (left << shiftCnt);
    }
};
