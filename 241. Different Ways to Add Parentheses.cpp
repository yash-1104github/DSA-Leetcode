class Solution {
public:
  
      vector<int> solve(string s){
          vector<int>ans;
    
           for(int i = 0 ; i < s.size(); i++){
                 if(s[i] == '*' || s[i] == '+' || s[i] == '-'){
                         vector<int>left_res = solve(s.substr(0,i));
                         vector<int>right_res = solve(s.substr(i+1));
                        
                       for(int num1 : left_res ){
                            for(int num2 : right_res){
                                  if(s[i] == '*'){
                                     ans.push_back(num1*num2);
                                  }
                                  else if(s[i] == '+'){
                                     ans.push_back(num1+num2);
                                  }
                                  else if(s[i] == '-'){
                                     ans.push_back(num1-num2);
                                  }
                            }
                       }
                 }
           }

           if(ans.empty()){
              ans.push_back(stoi(s));
           }
           return ans;
      }

    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};
