/*Time Complexity: O(n)

Counting nodes → O(n)
Finding midpoint → O(n/2)
Reversing second half → O(n/2)
Comparing both halves → O(n/2)

All steps are sequential → O(n) overall.

Space Complexity: O(1)
Only a fixed number of pointers used (temp, curr, prev, front, head1, head2) — no extra data structures, no recursion stack.*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
        return 1;
        int count = 0;
        ListNode *temp = head;
        while(temp){
            count++;
            temp = temp->next;

        };
        count/=2;
        ListNode *curr = head, *prev= NULL;
        while(count--)
        {
            prev = curr;
            curr = curr->next;


        };
        prev->next=NULL;
        ListNode *front;
        prev = NULL;
        while(curr){
            front  = curr->next;
            curr->next= prev;
            prev=curr;
            curr=front;


        }
        ListNode *head1 = head, *head2 = prev;
        while(head1){
            if(head1->val!=head2->val)
            return 0;
            head1 = head1->next;
            head2= head2->next;
        }
        return 1;

        
    }
};