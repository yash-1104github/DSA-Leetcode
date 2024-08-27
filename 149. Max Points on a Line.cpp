class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       int n = points.size();
       int cnt = 0;
        int infi = 10001;
        for(int i = 0 ; i < n - 1; i++){
            unordered_map<double,int>mp;
            for(int j = i+1 ; j < n ; j++){
                //infinite case 
                 if(points[i][0]==points[j][0]){
                     mp[10001]++;
                 }
                else{
    double slope = double(points[i][1]-points[j][1]) / double(points[i][0]-points[j][0]);
                  mp[slope]++;
                }
            }
            for(auto num : mp){
              cnt  = max(cnt,num.second+1);
            }
        }
        return max(1,cnt);
    }
};
