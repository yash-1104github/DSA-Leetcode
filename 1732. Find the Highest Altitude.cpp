class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();
        int sum = 0;
        vector<int>ans;
         
        ans.push_back(0);

        for(int i = 0 ; i < n; i++){

              sum += gain[i];
              ans.push_back(sum);
        }

        int val = *max_element(ans.begin(), ans.end());

        return val;
    }
};
