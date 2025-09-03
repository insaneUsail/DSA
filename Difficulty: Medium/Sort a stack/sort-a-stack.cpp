/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */

void dfs(int x,stack<int>& s){
   
    
    if(s.empty() || x>s.top()){
        s.push(x);

    }else{
        int y=s.top();
        s.pop();
        dfs(x,s);
        s.push(y);
    }
}
void reverse(stack<int>& s){
    if(!s.empty()){
    int x=s.top();
    s.pop();
    reverse(s);
    dfs(x,s);
        
    }
}

void SortedStack ::sort() {
reverse(s);
}