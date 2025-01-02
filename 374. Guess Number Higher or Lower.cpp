/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
          
          int l  = 1, r = n;

          while(l <= r){
             
                int guess_no = l +  (r-l)/2;


                if(guess(guess_no) == 0){
                    return guess_no;
                }

                else if(guess(guess_no) == -1){
                     r = guess_no-1;
                }

                else {
                    l = guess_no+1;
                }

          }
        return -1;
    }
};
