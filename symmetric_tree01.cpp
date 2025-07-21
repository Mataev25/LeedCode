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
public:
    bool equality(TreeNode*,TreeNode);
    bool isSymmetric(TreeNode* root) {
        if (!root->left && !root->right) return true;
        if (root->left && root->right)
            return equality(root->left, root->right);
        return false;
    }
    bool equality(TreeNode* l, TreeNode* r){
        if (!l && !r) return true;
        if (!l || !r) return false;
        if (l->val != r->val) return false;
        return equality(l->left,r->right)
            && equality(l->right, r->left);
    }
};