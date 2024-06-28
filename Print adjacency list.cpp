class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
       vector<vector<int>>ans;
        for(int i = 0;i<V ; i++){
            ans.push_back({});
        }
        for(int i = 0;i<edges.size();i++){
            int u = edges[i].first;
            int v = edges[i].second;
             ans[u].push_back(v);
             ans[v].push_back(u);          
        }
        return ans;
    }
};
