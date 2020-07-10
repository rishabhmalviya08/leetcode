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
    void inorder(vector<int> &v, TreeNode *root)
    {
        if(!root) return;
        inorder(v, root->left);
        v.push_back(root->val);
        inorder(v, root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        vector<int> res;
        inorder(v1, root1);
        inorder(v2, root2);
        int i = 0, j = 0;
        
        while(i < v1.size() && j < v2.size())
        {
            if(v1[i] > v2[j])
            {
                res.push_back(v2[j]);
                j++;
            }
            else
            {
                res.push_back(v1[i]);
                i++;
            }
        }
        
        while(i < v1.size())
            res.push_back(v1[i++]);
            
        while(j < v2.size())
            res.push_back(v2[j++]);
            
        return res;
    }
};