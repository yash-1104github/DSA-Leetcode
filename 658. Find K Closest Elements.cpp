class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
{
priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
      vector<int>ans1;  
      vector<int>ans2;  


   for(int i = 0; i < arr.size(); i++){
           pq.push({abs(arr[i]-x),i});
   }

   while(k > 0){
         auto top = pq.top();
         pq.pop();

         int i = top.first;
         int j = top.second;
        
        ans1.push_back(j);
         
       k--;
   }

    for(auto it : ans1){
          int val = arr[it];
          ans2.push_back(val);
    }

    sort(ans2.begin(),ans2.end());


  return ans2;

    }
};
