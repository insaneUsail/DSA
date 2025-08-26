// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
       unordered_map<int, int> hash;
        stack<int> st;

        for (int i=0;i<arr.size();i++) {
            while(!st.empty() && arr[i] < arr[st.top()]) {
                hash[st.top()] = i;
                st.pop();
            }
            if(st.empty()){
                            st.push(i);

            }
        else {
            st.pop();

            st.push(i);
            
        }
            
        }

for(int i=0;i<arr.size();i++){
arr[i] = (hash.count(i) ? arr[hash[i]] : -1);
    
}
    }
};