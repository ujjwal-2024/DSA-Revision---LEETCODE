/*class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // Create a dummy node.
        // This helps avoid special cases for the head node.
        ListNode* dummy = new ListNode(0);

        // Current pointer used to build the merged list.
        ListNode* current = dummy;

        // Traverse both lists until one becomes NULL.
        while (list1 != NULL && list2 != NULL) {

            // Attach the smaller node to the merged list.
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next; // Move list1 forward
            } else {
                current->next = list2;
                list2 = list2->next; // Move list2 forward
            }

            // Move current forward after attaching a node.
            current = current->next;
        }

        // One list may still have remaining nodes.
        // Since both lists are sorted, attach them directly.

        if (list1 != NULL) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        // Return the actual head of the merged list.
        // dummy points to the temporary node,
        // so return dummy->next.
        return dummy->next;
    }
};



ListNode* dummy = new ListNode(0);
ListNode* current = dummy;

// Build linked list using current

return dummy->next;

*/