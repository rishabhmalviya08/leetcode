/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans;
    void dfs(TreeNode* root, int parent, int grand)
    {
        if(!root) return;
        if(root && grand % 2 == 0) ans = ans + root->val;
        dfs(root->left, root->val, parent);
        dfs(root->right, root->val, parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        ans = 0;
        dfs(root, -1, -1);
        return ans;
    }
};