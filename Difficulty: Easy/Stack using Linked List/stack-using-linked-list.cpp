class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
StackNode *newNode=new StackNode(x);
newNode->next=top;
top=newNode;
}

    int pop() {
        if(top==nullptr){
            return -1;
        }
        StackNode *temp=top;
        int value=top->data;
        top=top->next;
        delete temp;
return value;
    }

    MyStack() { top = NULL; }
};