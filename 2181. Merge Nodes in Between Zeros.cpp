
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* curr = head;
        ListNode* dummycurr = dummyNode;
        
        while(1){
            int sum = 0;
            while(curr->next != nullptr && curr->next->val != 0 ){
                curr = curr->next;
                sum  += curr->val;
            }
            dummycurr -> next = new ListNode(sum);
            curr = curr->next;
            dummycurr = dummycurr->next;
            
            if(curr ->next == nullptr){ 
                break;
            }
        }
         ListNode*  newHead = dummyNode -> next ;
        delete(dummyNode);
        return newHead;
    }
};
