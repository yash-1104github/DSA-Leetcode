class Solution
{
  public:
      string reverseWords (string s)
    {
 
        int n = s.size();
        string temp = "",  ans = "";
        for(int i = 0 ; i < n ; i++){

           if(s[i] == '.'){
                ans = ans + temp;
                ans =  ans + s[i];
                temp = "";
                continue;
            }
            temp  = s[i] + temp;
             if(i == n-1){
                 ans = ans + temp;
             }
              
        }
        return ans;
    }
};
