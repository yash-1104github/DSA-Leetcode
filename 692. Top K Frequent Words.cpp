class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        int n = words.size();

         unordered_map<string,int>mp;

        for(auto it : words){
             mp[it]++;
        }


        auto lambda = [](pair<int,string>p1 , pair<int,string>p2){
            if(p1.first == p2.first){
                return p1.second > p2.second;
            }
            return p1.first < p2.first;
        };

priority_queue<pair<int,string>, vector<pair<int,string>>, decltype(lambda)> pq(lambda);

       
        for(auto it : mp){
             pq.push({it.second,it.first});
        }

        while(k > 0){
             ans.push_back(pq.top().second);
             k--;
             pq.pop();
        } 

        return ans;
    }
};
