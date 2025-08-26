class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hash;
        stack<int> st;

        for (int num : nums2) {
            while(!st.empty() && num > st.top()) {
                hash[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
vector<int> vt;
for(int num:nums1){
    vt.push_back(hash.count(num)?hash[num]:-1);
}
return vt;
    }
};