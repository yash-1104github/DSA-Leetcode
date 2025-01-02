class Solution {
public:

    long counting(vector<int>& piles, int k){
        long long temp = 0;
        for(int i = 0 ; i < piles.size(); i++){
            temp += (piles[i]+k-1)/k;
        }        
       return temp;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(); 

        long long l = 1, r = *max_element(piles.begin(),piles.end());
        long long ans = r;

        while(l <= r){             
           long long mid = l + (r-l)/2;
           long long val  = counting(piles,mid);
            if(val <= h){
                 ans = mid;
                 r = mid-1;
            }
            else{
                l = mid+1;
            }           
        }        
        return ans;      
    }
};

