class Solution {
public:
    string predictPartyVictory(string senate) {
        if(senate == "R") return "Radiant";
        if(senate == "D") return "Dire";
      
      int n = senate.size();
      queue<int>q1;
      queue<int>q2;
      
     for(int i = 0 ; i < n; i++){
           if(senate[i] == 'R') {
              q1.push(i);
           }
           if(senate[i] == 'D'){
            q2.push(i);
          }
    }  
     
    while(!q1.empty() && !q2.empty()) {
            int c1 = q1.front();
            int c2 = q2.front();

                if(c1 < c2) {                   
                     q1.push(n);
                }

                if(c1 > c2) {                     
                     q2.push(n);
                }

              q2.pop();
              q1.pop();
              n++;
    }
    if(q1.size() > q2.size()){
          return "Radiant";
    }
    return "Dire";
    }
};
