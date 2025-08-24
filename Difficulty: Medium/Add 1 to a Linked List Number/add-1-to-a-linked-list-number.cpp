/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* reverse(Node* head){
      Node *prev=NULL;
      Node *slow=head;
      Node *fast=NULL;
      while(slow){
        fast=slow->next;
          slow->next=prev;
          prev=slow;
          slow=fast;
         
      }
      return prev;
  }
    Node* addOne(Node* head) {
       Node *head1=reverse(head);
        Node *temp1=head1;
        while(temp1){
            temp1->data=temp1->data+1;
            if(temp1->data==10 && temp1->next==NULL){
               temp1->data=0;
                temp1->next=new Node(1);
                break;
            }
           else if(temp1->data==10){
                temp1->data=0;
                temp1=temp1->next;
            }else {
                temp1=NULL;
            }
            }
        
       
       return reverse(head1);
    }
};