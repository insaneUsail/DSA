class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int rock : asteroids) {
            bool destroyed = false;
            while (!st.empty() && rock < 0 && st.top() > 0) {
                if (abs(rock) > st.top()) {
                    st.pop(); 
                    continue;
                } else if (abs(rock) == st.top()) {
                    st.pop(); 
                }
                destroyed = true; 
                break;
            }
            if (!destroyed) {
                st.push(rock);
            }
        }

        vector<int> v;
        while (!st.empty()) {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
