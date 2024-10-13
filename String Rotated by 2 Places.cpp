class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    int Leftrote(string str1,string str2){
        int n = str1.size();
        int k = 2;
        string temp;
        
        for(int i = k ; i < n ;i++){
            temp += str1[i];
        }
        
        for(int i = 0 ; i < k ; i++){
            temp += str1[i];
        }
        
        if(temp == str2){
             return 1;
         }
        return 0;
    }
    
    int Rightrote(string str1,string str2){
        string temp;
         int n = str1.size();
         int k = 2;
        
        for(int i = n-k ; i < n ; i++){
            temp += str1[i];
        }
        
        for(int i = 0 ; i < n-k ;i++){
            temp += str1[i];
        }
         
         if(temp == str2){
             return 1;
         }
         return 0;
    }
    
    bool isRotated(string str1, string str2)
    {
        // Your code here      
       int ans =  Leftrote(str1,str2);        
        if(ans == 1){
            return true;
        }
       
        int val =  Rightrote(str1,str2);     
        if(val == 1){
            return true;
        }
      
        return false; 
    }
};
