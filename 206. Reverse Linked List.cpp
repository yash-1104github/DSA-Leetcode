class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        stack<int>st;
        ListNode* curr1 = head;
        ListNode* curr2 = head;

        while(curr1 != nullptr){
            
            st.push(curr1->val);
            curr1 = curr1->next;
        }
        
        while(!st.empty()){

         int data = st.top();
         curr2->val = data;
         curr2 = curr2->next;
         st.pop();

   }
        
      return head;  
    }
};
