class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(auto log: logs){
            if(log == "../"){
                if(count > 0 ) count-- ;
             }
             else if (log != "./"){
                count++ ;
            }
        }
        return count;
    }
};

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0 , n = logs.size();
        for(int i = 0; i< n ; i++){
            if(logs[i] == "../"){
                if(count > 0 ) count-- ;
             }
             else if (logs[i] != "./"){
                count++ ;
            }
        }
        return count;
    }
};
