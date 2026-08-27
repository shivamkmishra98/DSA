class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Return early if the list is empty or has only one element
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* curr = head;
        
        // Traverse the list until reaching the second to last node
        while (curr != nullptr && curr->next != nullptr) {
            // If the next node has the same value, skip it
            if (curr->val == curr->next->val) {
                ListNode* duplicate = curr->next;
                curr->next = curr->next->next;
                delete duplicate; // Free memory to prevent memory leaks
            } else {
                // Otherwise, move the pointer forward
                curr = curr->next;
            }
        }
        
        return head;
    }
};