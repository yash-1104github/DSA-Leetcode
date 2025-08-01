class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n = intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());

        if(n==1)return intervals;
        ans.push_back(intervals[0]); 
        
        for(int i = 1; i < n; i++){
             if(ans.back()[1] >= intervals[i][0]){
                  int maxi = max(intervals[i][1], ans.back()[1]);
                  ans.back()[1] = maxi;
             }
             else{
                 ans.push_back(intervals[i]);
             }
        }

        return ans;
    }
};
