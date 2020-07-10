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
    int maxdepth(TreeNode* root)
    {
        if(!root)
            return 0;
        int left = maxdepth(root->left);
        int right = maxdepth(root->right);
        return 1 + max(left, right);
    }
    int helper(int depth, TreeNode* root)
    {
        if(!root) return 0;
        if(depth == 1) return root->val;   
        return helper(depth-1, root->left) + helper(depth-1, root->right);
    }
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxdepth(root);
        return helper(depth, root);
    }
};