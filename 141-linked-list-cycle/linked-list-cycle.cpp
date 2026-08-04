class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Handle empty list or single node without a cycle
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Traverse the list with two different speeds
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Moves 1 step
            fast = fast->next->next;    // Moves 2 steps
            
            // If they meet, a cycle exists
            if (slow == fast) {
                return true;
            }
        }
        
        // If fast reaches the end, there is no cycle
        return false;
    }
};