class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int n = points.size();
        //min heap
 priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;

        vector<vector<int>>ans;

        int i = 0;

        while(i < n){   
            //no need of sqrt       
             long long val = ((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
             pq.push({val,{points[i][0],points[i][1]}});
             i++;
        }
         
         while(k > 0){
             auto top = pq.top();
             pq.pop();

             int i = top.second.first;
             int j = top.second.second;

             ans.push_back({i,j});
             k--;
         }

  return ans;
    }
};
