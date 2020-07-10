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
    vector<int> a;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root != NULL)
            
            a.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        
        return a;
    }
};