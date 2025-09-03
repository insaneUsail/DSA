
class Solution {
  public:
  
  void rev(int x,stack<int>& St){
      if(St.empty()){
          St.push(x);
      }
      else {
          
          int a=St.top();
          St.pop();
          rev(x,St);
          St.push(a);
      }
      
  }
void dfs(stack<int>& St){
    if(!St.empty()){
    int x=St.top();
    St.pop();
    dfs(St);
    rev(x,St);
    }
}
  
    void reverse(stack<int> &St) {
      dfs(St);
    }
};