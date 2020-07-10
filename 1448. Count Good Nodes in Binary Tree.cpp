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
    int goodNodes(TreeNode* root, int maxnum = INT_MIN) {
        if(root == NULL) return 0;
        if(root->val >= maxnum) return 1 + goodNodes(root->left, root->val) + goodNodes(root->right, root->val);
        return goodNodes(root->left, maxnum) + goodNodes(root->right, maxnum);
        
    }
};