class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
         int  xorr = 0 ;
        for(int i = 0 ; i < N ;i++){
            xorr = xorr ^ Arr[i];
        }
        
        int rightmostSetbit = xorr & ~(xorr - 1);
        
        long long res1 = 0 , res2 = 0;
        for(int i = 0 ; i < N ;i++){
            if((rightmostSetbit & Arr[i]) != 0){
                res1  = res1 ^ Arr[i];
            }
            else {
                res2 = res2 ^ Arr[i];
            }
        }
        if(res1 < res2 ) return {res2,res1};
        return {res1,res2};
    }
};
