/**
 * Definition for singly-linked list.
  * struct ListNode {
   *     int val;
    *     ListNode *next;
     *     ListNode() : val(0), next(nullptr) {}
      *     ListNode(int x) : val(x), next(nullptr) {}
       *     ListNode(int x, ListNode *next) : val(x), next(next) {}
        * };
         */
         class Solution {
            public:
                ListNode* swapPairs(ListNode* head) {
                            // Dummy node acts as a dependable anchor before the head
                                    ListNode dummy(0);
                                            dummy.next = head;
                                                    ListNode* prev = &dummy;
                                                            
                                                                    // Loop runs only if a complete pair exists ahead
                                                                            while (prev->next && prev->next->next) {
                                                                                            ListNode* first = prev->next;
                                                                                                        ListNode* second = first->next;
                                                                                                                    
                                                                                                                                // Pointer configuration updates
                                                                                                                                            first->next = second->next;
                                                                                                                                                        second->next = first;
                                                                                                                                                                    prev->next = second;
                                                                                                                                                                                
                                                                                                                                                                                            // Advance prev forward by two nodes (now at 'first')
                                                                                                                                                                                                        prev = first;
                                                                            }
                                                                                    
                                                                                            return dummy.next;
                }
         };
             