class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            int rock = asteroids[i];
            bool destroyed = false;
            while (!st.empty() && rock < 0 && st.top()>0) {
                if (rock * -1 < st.top()) {
                    destroyed=true;
                    break;
                } else if (rock * -1 > st.top())
                    if (st.top() < 0) {
                        st.push(rock);
                        break;
                    } else {
                        st.pop();
                    }
                else {
                    st.pop();
                    destroyed=true;
                    break;
                }
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