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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node pointing to head to handle edge cases like removing the head node
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        // Move the fast pointer n steps ahead
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }
        
        // Move both pointers simultaneously until fast reaches the last node.
        // This maintains a steady gap of n nodes between fast and slow.
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // slow->next is now the node to be removed
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next; // Skip the node
        
        delete nodeToDelete; // Free the allocated memory to prevent a leak
        
        ListNode* newHead = dummy->next;
        delete dummy; // Free the dummy node memory
        
        return newHead;
    }
};
