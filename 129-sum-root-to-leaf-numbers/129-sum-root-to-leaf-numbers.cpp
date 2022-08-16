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
    int f(TreeNode* root, int curr)
    {
        if(root==NULL) return 0;
        int sumtillhere=curr*10+root->val;
        if(root->left==NULL and root->right==NULL) return sumtillhere;
        return f(root->left,sumtillhere)+f(root->right,sumtillhere);
    }
    int sumNumbers(TreeNode* root) {
       return f(root,0);
    }
};