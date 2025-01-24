class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char,int>mp;

        for(auto c: s){
            mp[c]++;
        }

         auto comp = [](pair<int,char>p1, pair<int,char>p2){
                        if(p1.first == p2.first){
                            return p1.second > p2.second;
                        }
                    return p1.first < p2.first;
         };

        priority_queue<pair<int,char> , vector<pair<int,char>>, decltype(comp)>pq(comp);

        for(auto it : mp){
              if(mp.size() == 1 && mp[it.second] == 1) return s;
              if(it.second > (n+1)/2) return "";
              pq.push({it.second, it.first});
        }

        string temp = "";

        while(pq.size() > 1){
            auto top1 = pq.top();
            pq.pop();
            auto top2 = pq.top();
            pq.pop();

            top1.first--; 
            top2.first--;  

             temp += top1.second;
             temp += top2.second;

             if(top1.first > 0) pq.push(top1);
             if(top2.first > 0) pq.push(top2);
            
        }

         if(!pq.empty()){
             temp += pq.top().second;
        }

    return temp;
    }
};
