class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans = 0, val = 1;
        vector<int>degree(n,0);
        for(auto edges : roads){
          int u = edges[0];
          int v = edges[1];
           //roads = [[u,v]] = [[[edges[0],edges[1]]] 
            degree[u]++; 
            degree[v]++;
        }
        sort(degree.begin(),degree.end());
        for(int i = 0;i<n;i++){
            ans += degree[i]*val;
            val++;
        }
        return ans;
    }
};
