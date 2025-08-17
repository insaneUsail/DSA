/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* temp=head;
        if(x==1){
            Node* old=head;
            head=head->next;
            head->prev=nullptr;
            old->next=nullptr;
            delete old;
            return head;
        }
        
        for(int i=1;i<x;i++){
            
            if(i==x-1){
                if(temp->next->next==nullptr){
                     Node* temp1=temp->next;
                     temp->next=nullptr;
                    temp1->prev=nullptr;
                    delete temp1;
                }
               else{ Node* temp1=temp->next;
                temp->next->next->prev=temp;
                temp->next=temp->next->next;
                
                delete temp1;}
                
            }
            temp=temp->next;
        }
        return head;
    }
};