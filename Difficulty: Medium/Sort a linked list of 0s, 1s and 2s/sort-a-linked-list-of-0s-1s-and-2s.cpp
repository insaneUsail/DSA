/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==NULL || head->next ==NULL){
            return head;
        }
       Node* temp=head;
        vector<int> ans;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->data=ans[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};