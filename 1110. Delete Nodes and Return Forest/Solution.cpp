/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* dfs(TreeNode* root, unordered_set<int>& to_delete_set, vector<TreeNode*>& result) {
        if (!root)
            return nullptr;
        
        root->left = dfs(root->left, to_delete_set, result);
        root->right = dfs(root->right, to_delete_set, result);

        if (to_delete_set.count(root->val)) {
            if (root->left)
                result.push_back(root->left);
            if (root->right)
                result.push_back(root->right);
            delete root;
            return nullptr;
        }

        return root;
    }
    
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> to_delete_set(to_delete.begin(), to_delete.end());
        vector<TreeNode*> result;

        if (root && to_delete_set.count(root->val) == 0) {
            result.push_back(root);
        }
        
        root = dfs(root, to_delete_set, result);
        
        return result;
    }
};
