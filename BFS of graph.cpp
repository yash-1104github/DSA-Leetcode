class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int visit[V] = {0};
        visit[0] =1;
        queue<int>q;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it: adj[node]){
                if(!visit[it]){
                    visit[it] = 1;
                        q.push(it);
                }
            }
        }
        return bfs;
   }
};
