//TC =(logc +sqrtc) optimal
class Solution {
public:
    bool judgeSquareSum(int c) {
       long a = 0; long b = sqrt(c);
        while(a<=b){
       long   res =( a*a + b*b);
            if(res==c)return true;
            else if (res<c) a++;
            else b--;
        }
        return false;
    }
};

// TC = (sqrtc*logc) better 
class Solution {
public:
    bool judgeSquareSum(int c) {
       for(long a = 0 ; a *a <= c;a++){
           double b  = sqrt(c-a*a);
           if(b == int(b))
               return true;
       } 
        return false;
    };
};
