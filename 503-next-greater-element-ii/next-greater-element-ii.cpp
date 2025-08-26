class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        unordered_map<int, int> hash;
        stack<int> st;

        for (int i=0;i<2*nums.size();i++) {
            while(!st.empty() && nums[i%nums.size()] > nums[st.top()]) {
                hash[st.top()] = i%nums.size();
                st.pop();
            }
            st.push(i%nums.size());
        }
vector<int> vt;
for(int i=0;i<nums.size();i++){
    vt.push_back(hash.count(i)?nums[hash[i]]:-1);
    hash.erase(i);

}
return vt;
    }
};