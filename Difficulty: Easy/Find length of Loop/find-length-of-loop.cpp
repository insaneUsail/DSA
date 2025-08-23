/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        int y=1;
        Node *slow=head;
        Node *fast=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
         Node *size=slow->next;
        while(size!=slow){
            size=size->next;
            y++;
            if(size==slow) return y;
        }
            }
        }
       
        return 0;
    }
};