/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        
                Node* temp=head;
            Node *insert=new Node(x);  
        for(int i=0;i<p;i++){
            temp=temp->next;
            }
           
                if(temp->next==nullptr){
                    temp->next=insert;
                    insert->prev=temp;
                }
                else {
                   temp->next->prev=insert;
                   insert->next=temp->next;
                   temp->next=insert;
                   insert->prev=temp;
                  
                    
                }
                
                
            return head;
            
        }
        
    
};