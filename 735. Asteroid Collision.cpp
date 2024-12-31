class Solution {
public:
    
    vector<int> asteroidCollision(vector<int>& asteroids) {
      
        int  n = asteroids.size();
        vector<int>ans;
        stack<int>st;

         for(int &a : asteroids){           
             while(!st.empty() && a < 0 && st.top() > 0){                     
                    int sum = a+st.top();
                    if(sum == 0){
                         st.pop();
                         a = 0;
                    }
                    else if(sum > 0){
                          a = 0;
                    }
                    else{
                        st.pop();
                 }
            }

        if(a != 0){
           st.push(a);
        }
    }

    while(!st.empty()){            
            ans.push_back(st.top());
            st.pop();     
        }

        reverse(ans.begin(), ans.end());
        return ans;  
    }
}; 
