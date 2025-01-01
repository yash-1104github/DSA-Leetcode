class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
          
    if(head == nullptr || head->next == nullptr) return head;

          ListNode* odd = head;
          ListNode* even = head->next;
          ListNode* evenHead = head->next;

          while(even != nullptr &&  even->next != nullptr){
               
                 odd->next = odd->next->next;
                 even->next = even->next->next;

                 odd = odd->next;
                 even = even->next;
          }   

          odd->next = evenHead;
              
        return head;
    }
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
    if(head == nullptr) return nullptr;
    if(head->next == nullptr) return head;
    if(head->next->next == nullptr){
        return head;
    }
       int cnt  = 0;
       ListNode* curri = head;
       while(curri != nullptr){
          cnt++;
          curri = curri->next;
       }
   
        vector<int>ans;
        ListNode* curr1 = head;
        ListNode* curr2 = head->next;
          int jump1 = 1;
          while(curr1 != nullptr){
                
                ans.push_back(curr1->val);
                if(jump1 == cnt ) {
                    break;
                }
                jump1 += 2;
                curr1 = curr1->next->next;
                 
          }
           
           int jump2 = 2;
           while( curr2 != nullptr){
                
                ans.push_back(curr2->val);
                 if(jump2 == cnt ) {
                    break;
                }
                jump2 += 2;
                curr2 = curr2->next->next;
          }

              ListNode* newhead = new ListNode(ans[0]);
              ListNode* curr4 = newhead;

            for(int i = 1; i < ans.size(); i++){
                  
                  ListNode* temp = new ListNode(ans[i]);
                  curr4->next = temp;
                  curr4 = temp;
            }
        
      return newhead;
        
    }
};
