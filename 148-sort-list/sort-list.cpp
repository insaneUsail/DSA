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
    ListNode* splitAtMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev != NULL){
            prev->next = NULL;
        }
        return slow;
    }

    
    ListNode* merge(ListNode* left, ListNode* right){
        ListNode dummy(0);       // temporary starter node
        ListNode* tail = &dummy;

        ListNode* i = left;
        ListNode* j = right;

        while(i != NULL && j != NULL){
            if(i->val <= j->val){
                tail->next = i;
                i = i->next;
            }
            else{
                tail->next = j;
                j = j->next;
            }
            tail = tail->next;
        }

        if(i != NULL) tail->next = i;
        if(j != NULL) tail->next = j;

        return dummy.next;       // head of merged list
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* righthead = splitAtMid(head);
        ListNode* left = sortList(head);
        ListNode* right = sortList(righthead);

        return merge(left, right);
    }
};