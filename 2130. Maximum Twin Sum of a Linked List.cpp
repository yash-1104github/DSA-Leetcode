class Solution {
public:
    int pairSum(ListNode* head) {
        
           vector<int>ans;
           ListNode* curr = head;

           while(curr != nullptr){
                  ans.push_back(curr->val);
                  curr = curr->next;
           } 
            
           int n = ans.size();
           int i = 0 , j = n-1;
           int res = 0;

           while(i < j) {
                int  sum = ans[i]+ans[j];
                 if(sum > res){
                    res = sum;
                 }
                 i++;
                 j--;
           }

           return res;
    }
};
