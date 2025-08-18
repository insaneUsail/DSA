class MyStack {
  public:
  int arr[100];
  int top=-1;
    void push(int x) {
        arr[top+1]=x;
        top++;
    }

    int pop() {
        if(top>-1 && top<=99){
            return arr[top--];
        }
        else {
            return -1;
        }
        
    }
};