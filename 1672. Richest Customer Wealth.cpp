class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int cnt = 0;
        int n = accounts.size() , m = accounts[0].size();
        for(int i = 0; i < n ;i++){
               int nums = 0;
            for(int j = 0; j < m ; j++){
                   nums += accounts[i][j] ;
            }
            cnt = max(cnt , nums);
        }
        return cnt;
    }
};
