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
    int dfsh(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lefth=dfsh(root->left);
        if(lefth==-1) return -1;
        int righth=dfsh(root->right);
        if(righth==-1) return -1;
        if(abs(lefth-righth)>1)
            return -1;
        return max(lefth,righth)+1;
    }
    bool isBalanced(TreeNode* root) {
        return dfsh(root)!=-1;
    }
};