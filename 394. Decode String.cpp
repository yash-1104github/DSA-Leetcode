class Solution {
public:
    string decodeString(string s) {
        
        string ans = "";
        stack<string>st1;
        stack<int>st2;
        int num = 0;

        for(int i = 0; i < s.size(); i++){
            
             if(isdigit(s[i])){
                num  = num*10 + (s[i]-'0');
             }

             else if(s[i] == '['){
                  st2.push(num);
                  num = 0;
                  st1.push("[");
             }

             else if(s[i] == ']'){     
                   string temp = "";                
                      while(!st1.empty() && st1.top() != "["){
                             temp = st1.top() + temp;
                             st1.pop();
                    }
                  st1.pop();

                  int repeatcnt = st2.top();
                  st2.pop();
                  string reapeat = "";

                  while(repeatcnt != 0){
                      reapeat += temp;
                      repeatcnt--;
                }
                  st1.push(reapeat);                                                         
             }
             
             else {
                     st1.push(string(1,s[i]));
             }                   
        }


       while(!st1.empty()){
            ans  = st1.top() + ans;
            st1.pop();
        }
        return ans;
    }
};
