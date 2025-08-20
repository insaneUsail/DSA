class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for (int i = 0; i < s.size(); i++) {
            if (!temp.empty()) {
                if (temp.top() == '(' && s[i] == ')') {
                    temp.pop();
                } else if (temp.top() == '[' && s[i] == ']') {
                    temp.pop();
                } else if (temp.top() == '{' && s[i] == '}') {
                    temp.pop();
                }
                else {
                temp.push(s[i]);
            }
            } else {
                temp.push(s[i]);
            }
        }

        if (temp.empty())
            return true;
        else
            return false;
    }
};