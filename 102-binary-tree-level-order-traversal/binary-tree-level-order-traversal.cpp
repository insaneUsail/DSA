class Solution {
public:
    void dfs(TreeNode* node, int level, vector<vector<int>>& v) {
        if (!node) return;

        // if new level not created yet, add it
        if (v.size() == level) {
            v.push_back({});
        }

        v[level].push_back(node->val);

        dfs(node->left, level + 1, v);
        dfs(node->right, level + 1, v);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        dfs(root, 0, v);
        return v;
    }
};
