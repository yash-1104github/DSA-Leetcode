class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        int k = K;
        vector<int>ans;
        
        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end(), greater<int>());
        
        priority_queue<pair<int,pair<int, int>>>pq;
        
        set<pair<int,int>>st;
        
        pq.push({A[0]+B[0], {0,0}});
        st.insert({0,0});
        
        while(k > 0 && !pq.empty()){
            
            auto top = pq.top();
            pq.pop();
            
            int sum = top.first;
            int i = top.second.first;
            int j = top.second.second;
            
            ans.push_back(sum);
            
            
            if(i+1 < N && st.find({i+1,j}) == st.end()){
                    st.insert({i+1, j});
                    pq.push({A[i+1]+B[j], {i+1,j}});
                    
            }
            
            
            if(j+1 < N && st.find({i,j+1}) == st.end()){
                   st.insert({i,j+1});
                    pq.push({A[i]+B[j+1],{i,j+1}});
            }
            k--;
        }  
        
        return ans;
        
    }
};
