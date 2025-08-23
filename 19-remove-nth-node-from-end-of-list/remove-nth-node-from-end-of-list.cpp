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
        ListNode dummy(0, head);   // dummy node before head
        ListNode* first = &dummy;
        ListNode* second = &dummy;

        // move first ahead n+1 steps
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        // move both until first reaches end
        while (first) {
            first = first->next;
            second = second->next;
        }

        // delete node after 'second'
        ListNode* temp = second->next;
        second->next = temp->next;
        delete temp;

        return dummy.next;
    }
};
