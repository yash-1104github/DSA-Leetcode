class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        int n = names.size();
        vector<string>temp;
        unordered_map<int , string>mp;    
        for(int i = 0 ; i <  n ; i++){
            mp[heights[i]] = names[i];
        } 
       sort(heights.begin(), heights.end()); 
        for(int i = n-1 ; i >= 0 ; i--){
        temp.push_back(mp[heights[i]]);
        }
        
        return temp;    
    }
};
