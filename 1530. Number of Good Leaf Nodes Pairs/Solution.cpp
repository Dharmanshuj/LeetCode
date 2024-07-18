class Solution {
    void find_leaf(TreeNode* root, unordered_map<TreeNode*, string>& m, vector<TreeNode*>& leaf, string s) {
        if (!root) return;
        
        if (!root->left && !root->right) {
            m[root] = s;
            leaf.push_back(root);
            return;
        }
        find_leaf(root->left, m, leaf, s + '0');
        find_leaf(root->right, m, leaf, s + '1');
    }
public:
    int countPairs(TreeNode* root, int distance) {
        unordered_map<TreeNode*, string> m;
        vector<TreeNode*> leaf;
        find_leaf(root, m, leaf, "");
        int count = 0;

        for (int i = 0; i < leaf.size(); i++) {
            for (int j = i + 1; j < leaf.size(); j++) {
                string s1 = m[leaf[i]], s2 = m[leaf[j]];
                int k = 0;
                while (k < s1.size() && k < s2.size() && s1[k] == s2[k]) k++;
                int diff = s1.size() - k + s2.size() - k;
                if (diff <= distance) count++;
            }
        }
        return count;
    }
};
