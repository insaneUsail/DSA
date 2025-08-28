class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (int digit : num) {
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
         while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string s;
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        while (!s.empty() && s[0] == '0') {
            s.erase(0, 1);
        }
        if (s.empty())
            return s = '0';
        else
            return s;
    }
};